package tf;

import af.k;
import bg.m1;
import com.google.android.gms.identitycredentials.GetCredentialRequest;
import jg.l;
import kotlin.jvm.internal.Intrinsics;
import qa.t;
import ze.i;

/* loaded from: classes3.dex */
public final class g extends i {
    public static final e4.e k = new e4.e("IdentityCredentials.API", new m1(8), new ze.d());

    public final l c(GetCredentialRequest request) {
        Intrinsics.checkNotNullParameter(request, "request");
        k f2 = k.f();
        f2.f564b = new ye.d[]{cg.b.a};
        f2.f567e = new t(5, request);
        f2.f566d = 32701;
        l b10 = b(0, f2.e());
        Intrinsics.checkNotNullExpressionValue(b10, "doRead(...)");
        return b10;
    }
}
