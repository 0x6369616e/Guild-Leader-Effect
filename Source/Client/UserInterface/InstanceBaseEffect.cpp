// Search:
	if (IsGameMaster())
		return;
	
// Add (under it):
#ifdef ENABLE_LEADER_ON_GUILD
	if (m_kAffectFlagContainer.IsSet(AFF_GUILD))
		return;
#endif