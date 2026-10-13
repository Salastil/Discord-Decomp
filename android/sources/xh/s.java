package xh;

import java.util.Set;

/* loaded from: classes3.dex */
public final class s {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final Set f20489b;

    public s(String str, Set set) {
        this.a = str;
        this.f20489b = set;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (obj instanceof s) {
            s sVar = (s) obj;
            String str = sVar.a;
            String str2 = this.a;
            if (str2 != null ? str2.equals(str) : str == null) {
                if (this.f20489b.equals(sVar.f20489b)) {
                    return true;
                }
            }
        }
        return false;
    }

    public final int hashCode() {
        String str = this.a;
        return (((str == null ? 0 : str.hashCode()) ^ 1000003) * 1000003) ^ this.f20489b.hashCode();
    }

    public final String toString() {
        return com.discord.chat.bridge.botuikit.a.k(new StringBuilder("StandardIntegrityTokenRequest{requestHash="), this.a, ", verdictOptOut=", this.f20489b.toString(), "}");
    }
}
