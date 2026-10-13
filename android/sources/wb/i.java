package wb;

import android.util.Base64;
import java.util.Arrays;
import k2.r;

/* loaded from: classes3.dex */
public final class i {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final byte[] f19704b;

    /* renamed from: c, reason: collision with root package name */
    public final tb.d f19705c;

    public i(String str, byte[] bArr, tb.d dVar) {
        this.a = str;
        this.f19704b = bArr;
        this.f19705c = dVar;
    }

    public static r a() {
        r rVar = new r(22, false);
        rVar.f13144v = tb.d.f18249d;
        return rVar;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (obj instanceof i) {
            i iVar = (i) obj;
            if (this.a.equals(iVar.a)) {
                if (Arrays.equals(this.f19704b, iVar instanceof i ? iVar.f19704b : iVar.f19704b) && this.f19705c.equals(iVar.f19705c)) {
                    return true;
                }
            }
        }
        return false;
    }

    public final int hashCode() {
        return ((((this.a.hashCode() ^ 1000003) * 1000003) ^ Arrays.hashCode(this.f19704b)) * 1000003) ^ this.f19705c.hashCode();
    }

    public final String toString() {
        byte[] bArr = this.f19704b;
        String encodeToString = bArr == null ? "" : Base64.encodeToString(bArr, 2);
        StringBuilder sb2 = new StringBuilder("TransportContext(");
        sb2.append(this.a);
        sb2.append(", ");
        sb2.append(this.f19705c);
        sb2.append(", ");
        return com.discord.chat.bridge.botuikit.a.j(sb2, encodeToString, ")");
    }
}
