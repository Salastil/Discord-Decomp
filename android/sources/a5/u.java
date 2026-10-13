package a5;

import android.content.Context;
import android.content.Intent;
import android.graphics.BitmapFactory;
import android.os.Binder;
import android.os.Bundle;
import android.os.PersistableBundle;
import android.os.Process;
import android.text.TextUtils;
import androidx.core.app.Person;
import androidx.core.content.pm.ShortcutInfoCompat;
import com.android.billingclient.api.BillingResult;
import com.discord.misc.utilities.logThrottle.LogThrottleSingleton;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Iterator;
import java.util.concurrent.Callable;

/* loaded from: classes.dex */
public final /* synthetic */ class u implements Callable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f225d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f226e;

    public /* synthetic */ u(int i5, Object obj) {
        this.f225d = i5;
        this.f226e = obj;
    }

    /* JADX WARN: Code restructure failed: missing block: B:41:0x00d1, code lost:
    
        throw new java.lang.IllegalArgumentException("Shortcut must have an intent");
     */
    /* JADX WARN: Multi-variable type inference failed */
    @Override // java.util.concurrent.Callable
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object call() {
        boolean z5;
        Bundle bundle;
        com.google.android.gms.internal.play_billing.d dVar;
        switch (this.f225d) {
            case 0:
                v vVar = (v) this.f226e;
                b bVar = vVar.f230v;
                synchronized (bVar.a) {
                    try {
                        if (bVar.f126b != 3) {
                            boolean z6 = true;
                            int i5 = 0;
                            if (bVar.f126b == 1) {
                                z5 = 1;
                            } else {
                                z5 = 1;
                                z6 = false;
                            }
                            if (TextUtils.isEmpty(null)) {
                                bundle = null;
                            } else {
                                bundle = new Bundle();
                                bundle.putString("accountName", null);
                                com.google.android.gms.internal.play_billing.s.b(bundle, bVar.f128d, bVar.C.longValue());
                            }
                            synchronized (bVar.a) {
                                dVar = bVar.f133i;
                            }
                            if (dVar == null) {
                                b bVar2 = vVar.f230v;
                                bVar2.E(0);
                                BillingResult billingResult = g0.f164h;
                                bVar2.D(107, billingResult);
                                vVar.d(billingResult);
                            } else {
                                String packageName = vVar.f230v.f131g.getPackageName();
                                try {
                                    com.google.android.gms.internal.play_billing.b bVar3 = (com.google.android.gms.internal.play_billing.b) dVar;
                                    if (bVar3.y(25, packageName, "inapp") == 0) {
                                        b bVar4 = vVar.f230v;
                                        Context context = bVar4.f131g;
                                        synchronized (k0.class) {
                                        }
                                        synchronized (k0.class) {
                                        }
                                        synchronized (k0.class) {
                                        }
                                        synchronized (k0.class) {
                                        }
                                        long j = 100;
                                        Exception e9 = null;
                                        while (true) {
                                            long j5 = i5;
                                            if (j5 <= 3) {
                                                try {
                                                    Boolean valueOf = Boolean.valueOf(z6);
                                                    Bundle bundle2 = new Bundle();
                                                    bundle2.putString("callingPackage", bVar4.f131g.getPackageName());
                                                    com.google.android.gms.internal.play_billing.s.b(bundle2, bVar4.f128d, bVar4.C.longValue());
                                                    if (bVar4.f148z != null) {
                                                        bundle2.putBoolean("enablePendingPurchases", z5);
                                                    }
                                                    bVar3.H(bVar4.f131g.getPackageName(), bundle2, new x(bVar4, vVar, valueOf, i5));
                                                } catch (SecurityException e10) {
                                                    vVar.e(e10, z6, i5);
                                                } catch (Exception e11) {
                                                    e9 = e11;
                                                    if (j5 != 3) {
                                                        com.google.android.gms.internal.play_billing.s.i("BillingClient", a3.e.g(j, "Transient error during initialize(), retrying in ", "ms"), e9);
                                                        try {
                                                            Thread.sleep(j);
                                                            j = (long) Math.min(j * 2.0d, LogThrottleSingleton.RATE_LIMIT_ONE_MINUTE);
                                                            i5++;
                                                        } catch (InterruptedException e12) {
                                                            Thread.currentThread().interrupt();
                                                            vVar.e(e12, z6, i5);
                                                        }
                                                    } else {
                                                        vVar.e(e9, z6, i5);
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        int i6 = 29;
                                        int i10 = 29;
                                        int i11 = 3;
                                        while (true) {
                                            if (i10 >= 3) {
                                                try {
                                                    com.google.android.gms.internal.play_billing.s.g("BillingClient", k0.c0(i10, "trying subs apiVersion: "));
                                                    i11 = bundle == null ? bVar3.y(i10, packageName, "subs") : bVar3.z(i10, packageName, "subs", bundle);
                                                    if (i11 == 0) {
                                                        com.google.android.gms.internal.play_billing.s.g("BillingClient", k0.c0(i10, "highestLevelSupportedForSubs: "));
                                                    } else {
                                                        i10--;
                                                    }
                                                } catch (Exception e13) {
                                                    vVar.f(e13, z6);
                                                }
                                            } else {
                                                i10 = 0;
                                            }
                                        }
                                        b bVar5 = vVar.f230v;
                                        bVar5.getClass();
                                        bVar5.k = i10 >= 3 ? z5 : false;
                                        int i12 = z5;
                                        if (i10 < 3) {
                                            com.google.android.gms.internal.play_billing.s.g("BillingClient", "In-app billing API does not support subscription on this device.");
                                            i12 = 9;
                                        }
                                        while (true) {
                                            if (i6 >= 3) {
                                                com.google.android.gms.internal.play_billing.s.g("BillingClient", k0.c0(i6, "trying inapp apiVersion: "));
                                                i11 = bundle == null ? bVar3.y(i6, packageName, "inapp") : bVar3.z(i6, packageName, "inapp", bundle);
                                                if (i11 == 0) {
                                                    bVar5.f134l = i6;
                                                    com.google.android.gms.internal.play_billing.s.g("BillingClient", "mHighestLevelSupportedForInApp: " + i6);
                                                } else {
                                                    i6--;
                                                }
                                            }
                                        }
                                        b.q(bVar5, bVar5.f134l);
                                        int i13 = i12;
                                        if (bVar5.f134l < 3) {
                                            com.google.android.gms.internal.play_billing.s.h("BillingClient", "In-app billing API version 3 is not supported on this device.");
                                            i13 = 36;
                                        }
                                        b.r(bVar5, i11);
                                        if (i11 == 0) {
                                            vVar.c(0, z6);
                                            vVar.d(g0.f163g);
                                        } else {
                                            BillingResult billingResult2 = g0.a;
                                            vVar.b(billingResult2, i13, null, z6, 0);
                                            vVar.d(billingResult2);
                                        }
                                    }
                                } catch (Exception e14) {
                                    vVar.f(e14, z6);
                                }
                            }
                        }
                    } finally {
                    }
                }
                return null;
            case 1:
                ArrayList arrayList = new ArrayList();
                Iterator it = ((s.d) ((f3.f) this.f226e).f8320b.values()).iterator();
                while (true) {
                    s.a aVar = (s.a) it;
                    if (!aVar.hasNext()) {
                        return arrayList;
                    }
                    ShortcutInfoCompat shortcutInfoCompat = ((f3.g) aVar.next()).f8327c;
                    ShortcutInfoCompat shortcutInfoCompat2 = new ShortcutInfoCompat();
                    shortcutInfoCompat2.a = shortcutInfoCompat.a;
                    shortcutInfoCompat2.f1500b = shortcutInfoCompat.f1500b;
                    Intent[] intentArr = shortcutInfoCompat.f1501c;
                    shortcutInfoCompat2.f1501c = (Intent[]) Arrays.copyOf(intentArr, intentArr.length);
                    shortcutInfoCompat2.f1502d = shortcutInfoCompat.f1502d;
                    shortcutInfoCompat2.f1503e = shortcutInfoCompat.f1503e;
                    shortcutInfoCompat2.f1504f = shortcutInfoCompat.f1504f;
                    shortcutInfoCompat2.f1505g = shortcutInfoCompat.f1505g;
                    shortcutInfoCompat2.f1506h = shortcutInfoCompat.f1506h;
                    shortcutInfoCompat2.k = shortcutInfoCompat.k;
                    shortcutInfoCompat2.f1508l = shortcutInfoCompat.f1508l;
                    shortcutInfoCompat2.f1509m = shortcutInfoCompat.f1509m;
                    Person[] personArr = shortcutInfoCompat.f1507i;
                    if (personArr != null) {
                        shortcutInfoCompat2.f1507i = (Person[]) Arrays.copyOf(personArr, personArr.length);
                    }
                    if (shortcutInfoCompat.j != null) {
                        shortcutInfoCompat2.j = new HashSet(shortcutInfoCompat.j);
                    }
                    PersistableBundle persistableBundle = shortcutInfoCompat.f1510n;
                    if (persistableBundle != null) {
                        shortcutInfoCompat2.f1510n = persistableBundle;
                    }
                    if (TextUtils.isEmpty(shortcutInfoCompat2.f1503e)) {
                        throw new IllegalArgumentException("Shortcut must have a non-empty label");
                    }
                    Intent[] intentArr2 = shortcutInfoCompat2.f1501c;
                    if (intentArr2 != null && intentArr2.length != 0) {
                        arrayList.add(shortcutInfoCompat2);
                    }
                }
                break;
            case 2:
                return BitmapFactory.decodeFile(((f3.g) this.f226e).f8326b);
            default:
                w2.a aVar2 = (w2.a) this.f226e;
                aVar2.f19624v.set(true);
                try {
                    Process.setThreadPriority(10);
                    aVar2.f19625w.d();
                    Binder.flushPendingCommands();
                    return null;
                } finally {
                }
        }
    }
}
