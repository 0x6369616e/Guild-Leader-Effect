// Search:
	if (m_pGuild != pGuild)
	{
		m_pGuild = pGuild;
		UpdatePacket();
	}
// Add (under it):
#ifdef __LEADER_ON_GUILD__
	CheckGuildAffect();
#endif

// Search:
void CHARACTER::SetGuild(CGuild* pGuild)
// Add (over it):
#ifdef __LEADER_ON_GUILD__
void CHARACTER::CheckGuildAffect()
{
	if (IsPC())
	{
		bool update = false;
		if (m_pGuild)
		{
			if (GetPlayerID() == m_pGuild->GetMasterPID())
			{
				if (!m_afAffectFlag.IsSet(AFF_GUILD))
				{
					m_afAffectFlag.Set(AFF_GUILD);
					update = true;
				}
			}
			else
			{
				if (m_afAffectFlag.IsSet(AFF_GUILD))
				{
					m_afAffectFlag.Reset(AFF_GUILD);
					update = true;
				}
			}
		}
		else if (!m_pGuild)
		{
			if (m_afAffectFlag.IsSet(AFF_GUILD))
			{
				m_afAffectFlag.Reset(AFF_GUILD);
				update = true;
			}
		}

		if (update)
			UpdatePacket();
	}
	
}
#endif
