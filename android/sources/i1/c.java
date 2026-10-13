package i1;

import android.util.Base64;
import java.util.List;

/* loaded from: classes.dex */
public final class c {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final String f10438b;

    /* renamed from: c, reason: collision with root package name */
    public final String f10439c;

    /* renamed from: d, reason: collision with root package name */
    public final List f10440d;

    /* renamed from: e, reason: collision with root package name */
    public final String f10441e;

    /* renamed from: f, reason: collision with root package name */
    public final String f10442f;

    /* renamed from: g, reason: collision with root package name */
    public final String f10443g;

    public c(List list, String str, String str2, String str3, String str4, String str5) {
        str.getClass();
        this.a = str;
        str2.getClass();
        this.f10438b = str2;
        this.f10439c = str3;
        list.getClass();
        this.f10440d = list;
        this.f10441e = str4;
        this.f10442f = str5;
        StringBuilder sb2 = new StringBuilder();
        sb2.append(str);
        sb2.append("-");
        sb2.append(str2);
        sb2.append("-");
        sb2.append(str3);
        this.f10443g = com.discord.chat.bridge.botuikit.a.k(sb2, "-", str4, "-", str5);
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder();
        sb2.append("FontRequest {mProviderAuthority: " + this.a + ", mProviderPackage: " + this.f10438b + ", mQuery: " + this.f10439c + ", mSystemFont: " + this.f10441e + ", mVariationSettings: " + this.f10442f + ", mCertificates:");
        int i5 = 0;
        while (true) {
            List list = this.f10440d;
            if (i5 >= list.size()) {
                sb2.append("}mCertificatesArray: 0");
                return sb2.toString();
            }
            sb2.append(" [");
            List list2 = (List) list.get(i5);
            for (int i6 = 0; i6 < list2.size(); i6++) {
                sb2.append(" \"");
                sb2.append(Base64.encodeToString((byte[]) list2.get(i6), 0));
                sb2.append("\"");
            }
            sb2.append(" ]");
            i5++;
        }
    }
}
