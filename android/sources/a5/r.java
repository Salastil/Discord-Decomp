package a5;

import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.drawable.BitmapDrawable;
import android.os.Bundle;
import android.os.DeadObjectException;
import android.os.Parcel;
import android.text.TextUtils;
import com.android.billingclient.api.BillingResult;
import com.discord.billing.BillingManager$getUserCountry$1;
import com.google.android.gms.internal.play_billing.c3;
import com.google.android.gms.internal.play_billing.e3;
import com.google.android.gms.internal.play_billing.l1;
import com.google.android.gms.internal.play_billing.p3;
import com.google.android.gms.internal.play_billing.q3;
import java.net.URL;
import java.util.concurrent.Callable;

/* loaded from: classes.dex */
public final /* synthetic */ class r implements Callable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f216d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f217e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f218i;

    public /* synthetic */ r(b bVar, BillingManager$getUserCountry$1.AnonymousClass1.C00111 c00111) {
        this.f216d = 0;
        this.f217e = bVar;
        this.f218i = c00111;
    }

    @Override // java.util.concurrent.Callable
    public final Object call() {
        com.google.android.gms.internal.play_billing.d dVar;
        Bitmap decodeStream;
        switch (this.f216d) {
            case 0:
                b bVar = (b) this.f217e;
                BillingManager$getUserCountry$1.AnonymousClass1.C00111 c00111 = (BillingManager$getUserCountry$1.AnonymousClass1.C00111) this.f218i;
                bVar.getClass();
                try {
                    if (!bVar.H(com.facebook.imagepipeline.nativecode.c.f4679c)) {
                        com.google.android.gms.internal.play_billing.s.h("BillingClient", "Service disconnected.");
                        BillingResult billingResult = g0.f164h;
                        bVar.u(2, 13, billingResult);
                        c00111.onBillingConfigResponse(billingResult, null);
                    } else if (bVar.f141s) {
                        synchronized (bVar.a) {
                            dVar = bVar.f133i;
                        }
                        if (dVar == null) {
                            bVar.A(c00111, g0.f164h, 107, null);
                        } else if (com.facebook.imagepipeline.nativecode.c.f4678b && bVar.f145w) {
                            String str = bVar.f127c;
                            l1 O = com.facebook.imagepipeline.nativecode.b.O(bVar.f131g);
                            c3 r5 = e3.r();
                            p3 r7 = q3.r();
                            if (!r7.f5728e.h()) {
                                r7.d();
                            }
                            q3.t((q3) r7.f5728e, str);
                            q3 q3Var = (q3) r7.a();
                            if (!r5.f5728e.h()) {
                                r5.d();
                            }
                            e3.s((e3) r5.f5728e).put("PLAY_BILLING_LIBRARY_VERSION", q3Var);
                            p3 r10 = q3.r();
                            String packageName = bVar.f131g.getPackageName();
                            if (!r10.f5728e.h()) {
                                r10.d();
                            }
                            q3.t((q3) r10.f5728e, packageName);
                            q3 q3Var2 = (q3) r10.a();
                            if (!r5.f5728e.h()) {
                                r5.d();
                            }
                            e3.s((e3) r5.f5728e).put("CALLING_PACKAGE", q3Var2);
                            Bundle N = com.facebook.imagepipeline.nativecode.b.N(O, (e3) r5.a());
                            if (!TextUtils.isEmpty(null)) {
                                N.putString("accountName", null);
                            }
                            w wVar = new w(c00111, bVar.f132h, bVar.f134l, 1);
                            com.google.android.gms.internal.play_billing.b bVar2 = (com.google.android.gms.internal.play_billing.b) dVar;
                            Parcel v5 = bVar2.v();
                            int i5 = com.google.android.gms.internal.play_billing.f.a;
                            v5.writeInt(1);
                            N.writeToParcel(v5, 0);
                            v5.writeStrongBinder(wVar);
                            bVar2.x(2001, v5);
                        } else {
                            String packageName2 = bVar.f131g.getPackageName();
                            String str2 = bVar.f128d;
                            long longValue = bVar.C.longValue();
                            int i6 = com.google.android.gms.internal.play_billing.s.a;
                            Bundle bundle = new Bundle();
                            com.google.android.gms.internal.play_billing.s.b(bundle, str2, longValue);
                            if (!TextUtils.isEmpty(null)) {
                                bundle.putString("accountName", null);
                            }
                            ((com.google.android.gms.internal.play_billing.b) dVar).G(packageName2, bundle, new w(c00111, bVar.f132h, bVar.f134l, 0));
                        }
                    } else {
                        com.google.android.gms.internal.play_billing.s.h("BillingClient", "Current client doesn't support get billing config.");
                        BillingResult billingResult2 = g0.f169o;
                        bVar.u(32, 13, billingResult2);
                        c00111.onBillingConfigResponse(billingResult2, null);
                    }
                } catch (DeadObjectException e9) {
                    bVar.A(c00111, g0.f164h, 62, e9);
                } catch (Exception e10) {
                    bVar.A(c00111, g0.f162f, 62, e10);
                }
                return null;
            case 1:
                return (f3.g) ((f3.f) this.f218i).f8320b.get((String) this.f217e);
            default:
                nl.a aVar = (nl.a) this.f218i;
                String str3 = (String) this.f217e;
                try {
                    if (!str3.startsWith("http://") && !str3.startsWith("https://") && !str3.startsWith("file://") && !str3.startsWith("asset://") && !str3.startsWith("data:")) {
                        decodeStream = BitmapFactory.decodeResource(aVar.getResources(), aVar.getResources().getIdentifier(str3, "drawable", aVar.getContext().getPackageName()));
                        return new BitmapDrawable(aVar.getResources(), decodeStream);
                    }
                    decodeStream = BitmapFactory.decodeStream(new URL(str3).openStream());
                    return new BitmapDrawable(aVar.getResources(), decodeStream);
                } catch (Exception e11) {
                    e11.printStackTrace();
                    return null;
                }
        }
    }

    public /* synthetic */ r(Object obj, String str, int i5) {
        this.f216d = i5;
        this.f218i = obj;
        this.f217e = str;
    }
}
