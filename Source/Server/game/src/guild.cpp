// Search:
void CGuild::SaveLevel()
// Add (over it):

#ifdef __LEADER_ON_GUILD__
void CGuild::ChangeMaster()
{
	for (auto& ch : m_memberOnline)
		if (ch) ch->CheckGuildAffect();
}
#endif