package ve;

import af.q;
import android.content.Context;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Looper;
import androidx.appcompat.widget.w;
import com.google.android.gms.auth.api.signin.GoogleSignInOptions;
import com.google.android.gms.common.api.Scope;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Set;

/* loaded from: classes3.dex */
public final class e extends bf.e {
    public final GoogleSignInOptions V;

    public e(Context context, Looper looper, w wVar, GoogleSignInOptions googleSignInOptions, q qVar, q qVar2) {
        super(context, looper, 91, wVar, qVar, qVar2, 0);
        ue.a aVar;
        Set<Scope> set = (Set) wVar.f1142e;
        if (googleSignInOptions != null) {
            aVar = new ue.a();
            aVar.a = new HashSet();
            aVar.f18874h = new HashMap();
            aVar.a = new HashSet(googleSignInOptions.f5625e);
            aVar.f18868b = googleSignInOptions.f5628w;
            aVar.f18869c = googleSignInOptions.f5629x;
            aVar.f18870d = googleSignInOptions.f5627v;
            aVar.f18871e = googleSignInOptions.f5630y;
            aVar.f18872f = googleSignInOptions.f5626i;
            aVar.f18873g = googleSignInOptions.E;
            aVar.f18874h = GoogleSignInOptions.i(googleSignInOptions.F);
            aVar.f18875i = googleSignInOptions.G;
        } else {
            aVar = new ue.a();
            aVar.a = new HashSet();
            aVar.f18874h = new HashMap();
        }
        aVar.f18875i = vf.e.a();
        if (!set.isEmpty()) {
            for (Scope scope : set) {
                HashSet hashSet = aVar.a;
                hashSet.add(scope);
                hashSet.addAll(Arrays.asList(new Scope[0]));
            }
        }
        HashSet hashSet2 = aVar.a;
        if (hashSet2.contains(GoogleSignInOptions.K)) {
            Scope scope2 = GoogleSignInOptions.J;
            if (hashSet2.contains(scope2)) {
                hashSet2.remove(scope2);
            }
        }
        if (aVar.f18870d && (aVar.f18872f == null || !hashSet2.isEmpty())) {
            hashSet2.add(GoogleSignInOptions.I);
        }
        this.V = new GoogleSignInOptions(3, new ArrayList(hashSet2), aVar.f18872f, aVar.f18870d, aVar.f18868b, aVar.f18869c, aVar.f18871e, aVar.f18873g, aVar.f18874h, aVar.f18875i);
    }

    @Override // bf.e, ze.c
    public final int h() {
        return 12451000;
    }

    @Override // bf.e
    public final IInterface l(IBinder iBinder) {
        if (iBinder == null) {
            return null;
        }
        IInterface queryLocalInterface = iBinder.queryLocalInterface("com.google.android.gms.auth.api.signin.internal.ISignInService");
        return queryLocalInterface instanceof k ? (k) queryLocalInterface : new k(iBinder, "com.google.android.gms.auth.api.signin.internal.ISignInService", 3);
    }

    @Override // bf.e
    public final String p() {
        return "com.google.android.gms.auth.api.signin.internal.ISignInService";
    }

    @Override // bf.e
    public final String q() {
        return "com.google.android.gms.auth.api.signin.service.START";
    }
}
