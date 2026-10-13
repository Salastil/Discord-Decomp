package ks;

import java.io.Serializable;
import net.time4j.q1;

/* loaded from: classes3.dex */
public abstract class a implements d, Serializable {
    private final int hash;
    private final int identity;
    private final String name;

    public a(String str) {
        if (str.trim().isEmpty()) {
            throw new IllegalArgumentException("Element name is empty or contains only white space.");
        }
        this.name = str;
        int hashCode = str.hashCode();
        this.hash = hashCode;
        if (!l()) {
            hashCode = -1;
        } else if (hashCode == -1) {
            hashCode = ~hashCode;
        }
        this.identity = hashCode;
    }

    @Override // java.util.Comparator
    /* renamed from: e, reason: merged with bridge method [inline-methods] */
    public int compare(e eVar, e eVar2) {
        return ((Comparable) eVar.d(this)).compareTo(eVar2.d(this));
    }

    @Override // java.util.Comparator
    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || getClass() != obj.getClass()) {
            return false;
        }
        a aVar = (a) obj;
        int i5 = this.identity;
        if (i5 != aVar.identity) {
            return false;
        }
        if (i5 == -1) {
            return this.name.equals(aVar.name) && g(aVar);
        }
        return true;
    }

    public j f(r rVar) {
        return null;
    }

    public boolean g(a aVar) {
        return true;
    }

    @Override // ks.d
    public boolean h() {
        return this instanceof q1;
    }

    public final int hashCode() {
        return this.hash;
    }

    public d j() {
        return null;
    }

    public String k(r rVar) {
        if (!is.e.class.isAssignableFrom(rVar.f13682d)) {
            return null;
        }
        StringBuilder sb2 = new StringBuilder("Accessing the local element [");
        sb2.append(this.name);
        sb2.append("] from a global type requires a timezone.\n- Try to apply a zonal query like \"");
        return com.discord.chat.bridge.botuikit.a.j(sb2, this.name, ".atUTC()\".\n- Or try to first convert the global type to a zonal timestamp: \"moment.toZonalTimestamp(...)\".\n- If used in formatting then consider \"ChronoFormatter.withTimezone(TZID)\".");
    }

    public boolean l() {
        return this instanceof net.time4j.u;
    }

    @Override // ks.d
    public final String name() {
        return this.name;
    }

    public String toString() {
        String name = getClass().getName();
        StringBuilder sb2 = new StringBuilder(name.length() + 32);
        sb2.append(name);
        sb2.append('@');
        sb2.append(this.name);
        return sb2.toString();
    }
}
