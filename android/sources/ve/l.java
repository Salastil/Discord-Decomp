package ve;

import android.app.AppOpsManager;
import android.content.Context;
import android.content.pm.PackageInfo;
import android.content.pm.PackageManager;
import android.os.Binder;
import android.os.Build;
import android.os.Looper;
import android.os.Parcel;
import android.text.TextUtils;
import android.util.Log;
import bf.t;
import com.google.android.gms.auth.api.signin.GoogleSignInAccount;
import com.google.android.gms.auth.api.signin.GoogleSignInOptions;
import com.google.android.gms.auth.api.signin.RevocationBoundService;
import com.google.android.gms.common.api.Status;
import com.google.android.gms.common.api.internal.BasePendingResult;
import ks.n;
import org.json.JSONException;
import ze.p;

/* loaded from: classes3.dex */
public final class l extends ag.a {

    /* renamed from: g, reason: collision with root package name */
    public final /* synthetic */ int f19406g = 0;

    /* renamed from: h, reason: collision with root package name */
    public final Object f19407h;

    public l(RevocationBoundService revocationBoundService) {
        super("com.google.android.gms.auth.api.signin.internal.IRevocationService", 7);
        this.f19407h = revocationBoundService;
    }

    @Override // ag.a
    public final boolean x(int i5, Parcel parcel, Parcel parcel2) {
        BasePendingResult basePendingResult;
        BasePendingResult basePendingResult2;
        String d6;
        int i6 = this.f19406g;
        Object obj = this.f19407h;
        switch (i6) {
            case 0:
                RevocationBoundService revocationBoundService = (RevocationBoundService) obj;
                if (i5 == 1) {
                    z();
                    b a = b.a(revocationBoundService);
                    GoogleSignInAccount b10 = a.b();
                    GoogleSignInOptions googleSignInOptions = GoogleSignInOptions.H;
                    if (b10 != null) {
                        String d7 = a.d("defaultGoogleSignInAccount");
                        if (!TextUtils.isEmpty(d7) && (d6 = a.d(b.f("googleSignInOptions", d7))) != null) {
                            try {
                                googleSignInOptions = GoogleSignInOptions.h(d6);
                            } catch (JSONException unused) {
                            }
                        }
                        googleSignInOptions = null;
                    }
                    GoogleSignInOptions googleSignInOptions2 = googleSignInOptions;
                    t.g(googleSignInOptions2);
                    lf.h hVar = new lf.h((RevocationBoundService) obj, null, re.a.a, googleSignInOptions2, new ze.h(new l8.a(1), Looper.getMainLooper()));
                    Context context = hVar.a;
                    af.t tVar = hVar.f21214h;
                    if (b10 != null) {
                        boolean z5 = hVar.c() == 3;
                        a1.d dVar = h.a;
                        if (dVar.f14e <= 3) {
                            Log.d((String) dVar.f15i, ((String) dVar.f16v).concat("Revoking access"));
                        }
                        String d8 = b.a(context).d("refreshToken");
                        h.a(context);
                        if (!z5) {
                            g gVar = new g(tVar, 1);
                            tVar.a(gVar);
                            basePendingResult2 = gVar;
                        } else if (d8 == null) {
                            a1.d dVar2 = c.f19390i;
                            Status status = new Status(4, null, null, null);
                            t.a("Status code must not be SUCCESS", !false);
                            BasePendingResult pVar = new p(status);
                            pVar.setResult(status);
                            basePendingResult2 = pVar;
                        } else {
                            c cVar = new c(d8);
                            new Thread(cVar).start();
                            basePendingResult2 = cVar.f19392e;
                        }
                        basePendingResult2.addStatusListener(new af.l(basePendingResult2, new jg.g(), new wi.d(2)));
                    } else {
                        boolean z6 = hVar.c() == 3;
                        a1.d dVar3 = h.a;
                        if (dVar3.f14e <= 3) {
                            Log.d((String) dVar3.f15i, ((String) dVar3.f16v).concat("Signing out"));
                        }
                        h.a(context);
                        if (z6) {
                            BasePendingResult jVar = new af.j(tVar);
                            jVar.setResult(Status.f5654w);
                            basePendingResult = jVar;
                        } else {
                            g gVar2 = new g(tVar, 0);
                            tVar.a(gVar2);
                            basePendingResult = gVar2;
                        }
                        basePendingResult.addStatusListener(new af.l(basePendingResult, new jg.g(), new wi.d(2)));
                    }
                } else if (i5 == 2) {
                    z();
                    i.t(revocationBoundService).u();
                }
                break;
            default:
                if (i5 == 1) {
                    Status status2 = (Status) vf.f.a(parcel, Status.CREATOR);
                    se.f fVar = (se.f) vf.f.a(parcel, se.f.CREATOR);
                    vf.f.b(parcel);
                    n.x(status2, fVar, (jg.g) obj);
                    break;
                }
                break;
        }
        return true;
    }

    public void z() {
        AppOpsManager appOpsManager;
        RevocationBoundService revocationBoundService = (RevocationBoundService) this.f19407h;
        int callingUid = Binder.getCallingUid();
        jf.b a = jf.c.a(revocationBoundService);
        a.getClass();
        try {
            appOpsManager = (AppOpsManager) a.a.getSystemService("appops");
        } catch (SecurityException unused) {
        }
        if (appOpsManager == null) {
            throw new NullPointerException("context.getSystemService(Context.APP_OPS_SERVICE) is null");
        }
        appOpsManager.checkPackage(callingUid, "com.google.android.gms");
        try {
            PackageInfo packageInfo = revocationBoundService.getPackageManager().getPackageInfo("com.google.android.gms", 64);
            ye.j a10 = ye.j.a(revocationBoundService);
            a10.getClass();
            if (packageInfo != null) {
                if (ye.j.b(packageInfo, false)) {
                    return;
                }
                if (ye.j.b(packageInfo, true)) {
                    Context context = a10.a;
                    try {
                        if (!ye.i.f20921c) {
                            try {
                                PackageInfo packageInfo2 = jf.c.a(context).a.getPackageManager().getPackageInfo("com.google.android.gms", Build.VERSION.SDK_INT >= 28 ? 134217792 : 64);
                                ye.j.a(context);
                                if (packageInfo2 == null || ye.j.b(packageInfo2, false) || !ye.j.b(packageInfo2, true)) {
                                    ye.i.f20920b = false;
                                } else {
                                    ye.i.f20920b = true;
                                }
                                ye.i.f20921c = true;
                            } catch (PackageManager.NameNotFoundException e9) {
                                Log.w("GooglePlayServicesUtil", "Cannot find Google Play services package name.", e9);
                                ye.i.f20921c = true;
                            }
                        }
                        if (ye.i.f20920b || !"user".equals(Build.TYPE)) {
                            return;
                        } else {
                            Log.w("GoogleSignatureVerifier", "Test-keys aren't accepted on this build.");
                        }
                    } catch (Throwable th2) {
                        ye.i.f20921c = true;
                        throw th2;
                    }
                }
            }
        } catch (PackageManager.NameNotFoundException unused2) {
            if (Log.isLoggable("UidVerifier", 3)) {
                Log.d("UidVerifier", "Package manager can't find google play services package, defaulting to false");
            }
        }
        throw new SecurityException(s4.h.e(Binder.getCallingUid(), "Calling UID ", " is not Google Play services."));
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public l(jg.g gVar) {
        super("com.google.android.gms.auth.api.identity.internal.IBeginSignInCallback", 7);
        this.f19407h = gVar;
    }
}
