package th;

/* loaded from: classes3.dex */
public final class v {

    /* renamed from: d, reason: collision with root package name */
    public static final v f18595d = new v(1, null, null);
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final String f18596b;

    /* renamed from: c, reason: collision with root package name */
    public final String f18597c;

    public v(int i5, String str, String str2) {
        this.a = i5;
        this.f18596b = str;
        this.f18597c = str2;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof v)) {
            return false;
        }
        v vVar = (v) obj;
        String str = vVar.f18597c;
        String str2 = vVar.f18596b;
        if (this.a != vVar.a) {
            return false;
        }
        String str3 = this.f18596b;
        if (str3 == null) {
            if (str2 != null) {
                return false;
            }
        } else if (!str3.equals(str2)) {
            return false;
        }
        String str4 = this.f18597c;
        return str4 == null ? str == null : str4.equals(str);
    }

    public final int hashCode() {
        String str = this.f18596b;
        int hashCode = str == null ? 0 : str.hashCode();
        String str2 = this.f18597c;
        return (str2 != null ? str2.hashCode() : 0) ^ ((hashCode ^ ((this.a ^ 1000003) * 1000003)) * 1000003);
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("AssetPackLocation{packStorageMethod=");
        sb2.append(this.a);
        sb2.append(", path=");
        sb2.append(this.f18596b);
        sb2.append(", assetsPath=");
        return com.discord.chat.bridge.botuikit.a.j(sb2, this.f18597c, "}");
    }
}
