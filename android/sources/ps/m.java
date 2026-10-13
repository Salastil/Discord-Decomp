package ps;

import androidx.appcompat.widget.m3;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Objects;
import javax.net.ssl.SSLSocket;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class m {

    /* renamed from: e, reason: collision with root package name */
    public static final m f16566e;

    /* renamed from: f, reason: collision with root package name */
    public static final m f16567f;
    public final boolean a;

    /* renamed from: b, reason: collision with root package name */
    public final boolean f16568b;

    /* renamed from: c, reason: collision with root package name */
    public final String[] f16569c;

    /* renamed from: d, reason: collision with root package name */
    public final String[] f16570d;

    static {
        l lVar = l.f16563r;
        l lVar2 = l.f16564s;
        l lVar3 = l.f16565t;
        l lVar4 = l.f16557l;
        l lVar5 = l.f16559n;
        l lVar6 = l.f16558m;
        l lVar7 = l.f16560o;
        l lVar8 = l.f16562q;
        l lVar9 = l.f16561p;
        l[] lVarArr = {lVar, lVar2, lVar3, lVar4, lVar5, lVar6, lVar7, lVar8, lVar9};
        l[] lVarArr2 = {lVar, lVar2, lVar3, lVar4, lVar5, lVar6, lVar7, lVar8, lVar9, l.j, l.k, l.f16555h, l.f16556i, l.f16553f, l.f16554g, l.f16552e};
        m3 m3Var = new m3();
        m3Var.c((l[]) Arrays.copyOf(lVarArr, 9));
        w wVar = w.TLS_1_3;
        w wVar2 = w.TLS_1_2;
        m3Var.f(wVar, wVar2);
        m3Var.f1036b = true;
        m3Var.a();
        m3 m3Var2 = new m3();
        m3Var2.c((l[]) Arrays.copyOf(lVarArr2, 16));
        m3Var2.f(wVar, wVar2);
        m3Var2.f1036b = true;
        f16566e = m3Var2.a();
        m3 m3Var3 = new m3();
        m3Var3.c((l[]) Arrays.copyOf(lVarArr2, 16));
        m3Var3.f(wVar, wVar2, w.TLS_1_1, w.TLS_1_0);
        m3Var3.f1036b = true;
        m3Var3.a();
        f16567f = new m(false, false, null, null);
    }

    public m(boolean z5, boolean z6, String[] strArr, String[] strArr2) {
        this.a = z5;
        this.f16568b = z6;
        this.f16569c = strArr;
        this.f16570d = strArr2;
    }

    public final List a() {
        String[] strArr = this.f16569c;
        if (strArr == null) {
            return null;
        }
        ArrayList arrayList = new ArrayList(strArr.length);
        for (String str : strArr) {
            arrayList.add(l.f16549b.c(str));
        }
        return CollectionsKt.i0(arrayList);
    }

    public final boolean b(SSLSocket socket) {
        Intrinsics.checkNotNullParameter(socket, "socket");
        if (!this.a) {
            return false;
        }
        String[] strArr = this.f16570d;
        if (strArr != null) {
            String[] enabledProtocols = socket.getEnabledProtocols();
            ho.b bVar = ho.b.f10142d;
            Intrinsics.checkNotNull(bVar, "null cannot be cast to non-null type java.util.Comparator<T of kotlin.comparisons.ComparisonsKt__ComparisonsKt.naturalOrder>");
            if (!qs.b.i(strArr, enabledProtocols, bVar)) {
                return false;
            }
        }
        String[] strArr2 = this.f16569c;
        return strArr2 == null || qs.b.i(strArr2, socket.getEnabledCipherSuites(), l.f16550c);
    }

    public final List c() {
        String[] strArr = this.f16570d;
        if (strArr == null) {
            return null;
        }
        ArrayList arrayList = new ArrayList(strArr.length);
        for (String str : strArr) {
            arrayList.add(jb.a.j(str));
        }
        return CollectionsKt.i0(arrayList);
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof m)) {
            return false;
        }
        if (obj == this) {
            return true;
        }
        m mVar = (m) obj;
        boolean z5 = mVar.a;
        boolean z6 = this.a;
        if (z6 != z5) {
            return false;
        }
        if (z6) {
            return Arrays.equals(this.f16569c, mVar.f16569c) && Arrays.equals(this.f16570d, mVar.f16570d) && this.f16568b == mVar.f16568b;
        }
        return true;
    }

    public final int hashCode() {
        if (!this.a) {
            return 17;
        }
        String[] strArr = this.f16569c;
        int hashCode = (527 + (strArr == null ? 0 : Arrays.hashCode(strArr))) * 31;
        String[] strArr2 = this.f16570d;
        return ((hashCode + (strArr2 != null ? Arrays.hashCode(strArr2) : 0)) * 31) + (!this.f16568b ? 1 : 0);
    }

    public final String toString() {
        if (!this.a) {
            return "ConnectionSpec()";
        }
        return "ConnectionSpec(cipherSuites=" + ((Object) Objects.toString(a(), "[all enabled]")) + ", tlsVersions=" + ((Object) Objects.toString(c(), "[all enabled]")) + ", supportsTlsExtensions=" + this.f16568b + ')';
    }
}
