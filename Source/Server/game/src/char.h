// Search:
		CWarMap*		GetWarMap() const	{ return m_pWarMap; }
// Add (under it):
#ifdef __LEADER_ON_GUILD__
		void			CheckGuildAffect();
#endif