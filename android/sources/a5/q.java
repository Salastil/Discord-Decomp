package a5;

import android.app.Activity;
import android.os.Bundle;
import android.os.DeadObjectException;
import android.os.Parcel;
import android.text.TextUtils;
import com.android.billingclient.api.BillingResult;
import com.android.billingclient.api.ProductDetails;
import com.android.billingclient.api.Purchase;
import com.android.billingclient.api.QueryProductDetailsParams;
import com.android.billingclient.api.QueryProductDetailsResult;
import com.facebook.react.bridge.Promise;
import java.io.File;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Objects;
import java.util.concurrent.Callable;
import org.json.JSONException;
import org.json.JSONObject;

/* loaded from: classes.dex */
public final /* synthetic */ class q implements Callable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f212d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f213e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f214i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f215v;

    public /* synthetic */ q(Object obj, Object obj2, Object obj3, int i5) {
        this.f212d = i5;
        this.f213e = obj;
        this.f214i = obj2;
        this.f215v = obj3;
    }

    /* JADX WARN: Code restructure failed: missing block: B:90:0x012f, code lost:
    
        r17 = r9;
     */
    /* JADX WARN: Removed duplicated region for block: B:58:0x0213  */
    /* JADX WARN: Removed duplicated region for block: B:75:0x02ee  */
    /* JADX WARN: Removed duplicated region for block: B:77:0x02fa  */
    /* JADX WARN: Removed duplicated region for block: B:88:0x020b A[SYNTHETIC] */
    @Override // java.util.concurrent.Callable
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object call() {
        Bundle c6;
        com.google.android.gms.internal.play_billing.d dVar;
        com.google.android.gms.internal.play_billing.d dVar2;
        int readInt;
        String str;
        ke.u uVar;
        int i5;
        com.google.android.gms.internal.play_billing.d dVar3;
        Exception exc;
        io.sentry.internal.debugmeta.c t5;
        List list;
        com.google.android.gms.internal.play_billing.d dVar4;
        BillingResult e9;
        int i6;
        File file;
        String str2;
        File file2;
        int i10 = 107;
        int i11 = 1;
        Exception exc2 = null;
        switch (this.f212d) {
            case 0:
                b bVar = (b) this.f213e;
                String str3 = (String) this.f214i;
                String str4 = (String) this.f215v;
                try {
                    synchronized (bVar.a) {
                        dVar = bVar.f133i;
                    }
                    if (dVar == null) {
                        return com.google.android.gms.internal.play_billing.s.c(107, g0.f164h);
                    }
                    return ((com.google.android.gms.internal.play_billing.b) dVar).B(bVar.f131g.getPackageName(), str3, str4);
                } catch (DeadObjectException e10) {
                    BillingResult billingResult = g0.f164h;
                    String a = e0.a(e10);
                    c6 = com.google.android.gms.internal.play_billing.s.c(5, billingResult);
                    if (a != null) {
                        c6.putString("ADDITIONAL_LOG_DETAILS", a);
                    }
                    return c6;
                } catch (Exception e11) {
                    BillingResult billingResult2 = g0.f162f;
                    String a10 = e0.a(e11);
                    c6 = com.google.android.gms.internal.play_billing.s.c(5, billingResult2);
                    if (a10 != null) {
                        c6.putString("ADDITIONAL_LOG_DETAILS", a10);
                    }
                    return c6;
                }
            case 1:
                b bVar2 = (b) this.f213e;
                com.discord.billing.a aVar = (com.discord.billing.a) this.f214i;
                h hVar = (h) this.f215v;
                if (!bVar2.H(com.facebook.imagepipeline.nativecode.c.f4679c)) {
                    BillingResult billingResult3 = g0.f164h;
                    bVar2.u(2, 4, billingResult3);
                    aVar.a(billingResult3, hVar.f173b);
                    return null;
                }
                String str5 = hVar.f173b;
                try {
                    com.google.android.gms.internal.play_billing.s.g("BillingClient", "Consuming purchase with token: " + str5);
                    synchronized (bVar2.a) {
                        dVar2 = bVar2.f133i;
                    }
                    if (dVar2 == null) {
                        bVar2.z(aVar, str5, g0.f164h, 107, "Service has been reset to null.", null);
                        return null;
                    }
                    if (bVar2.f136n) {
                        String packageName = bVar2.f131g.getPackageName();
                        boolean z5 = bVar2.f136n;
                        String str6 = bVar2.f128d;
                        long longValue = bVar2.C.longValue();
                        Bundle bundle = new Bundle();
                        if (z5) {
                            com.google.android.gms.internal.play_billing.s.b(bundle, str6, longValue);
                        }
                        Bundle A = ((com.google.android.gms.internal.play_billing.b) dVar2).A(packageName, str5, bundle);
                        readInt = A.getInt("RESPONSE_CODE");
                        str = com.google.android.gms.internal.play_billing.s.f("BillingClient", A);
                    } else {
                        String packageName2 = bVar2.f131g.getPackageName();
                        com.google.android.gms.internal.play_billing.b bVar3 = (com.google.android.gms.internal.play_billing.b) dVar2;
                        Parcel v5 = bVar3.v();
                        v5.writeInt(3);
                        v5.writeString(packageName2);
                        v5.writeString(str5);
                        Parcel w5 = bVar3.w(5, v5);
                        readInt = w5.readInt();
                        w5.recycle();
                        str = "";
                    }
                    BillingResult a11 = g0.a(readInt, str);
                    if (readInt != 0) {
                        bVar2.z(aVar, str5, a11, 23, k0.c0(readInt, "Error consuming purchase with token. Response code: "), null);
                        return null;
                    }
                    com.google.android.gms.internal.play_billing.s.g("BillingClient", "Successfully consumed purchase.");
                    aVar.a(a11, str5);
                    return null;
                } catch (DeadObjectException e12) {
                    bVar2.z(aVar, str5, g0.f164h, 29, "Error consuming purchase!", e12);
                    return null;
                } catch (Exception e13) {
                    bVar2.z(aVar, str5, g0.f162f, 29, "Error consuming purchase!", e13);
                    return null;
                }
            case 2:
                Exception exc3 = null;
                b bVar4 = (b) this.f213e;
                k kVar = (k) this.f214i;
                QueryProductDetailsParams queryProductDetailsParams = (QueryProductDetailsParams) this.f215v;
                if (!bVar4.H(com.facebook.imagepipeline.nativecode.c.f4679c)) {
                    BillingResult billingResult4 = g0.f164h;
                    bVar4.u(2, 7, billingResult4);
                    com.google.android.gms.internal.play_billing.q qVar = com.google.android.gms.internal.play_billing.t.f5834e;
                    com.google.android.gms.internal.play_billing.x xVar = com.google.android.gms.internal.play_billing.x.f5880w;
                    kVar.a(billingResult4, new QueryProductDetailsResult(xVar, xVar));
                    return null;
                }
                if (!bVar4.f140r) {
                    com.google.android.gms.internal.play_billing.s.h("BillingClient", "Querying product details is not supported.");
                    BillingResult billingResult5 = g0.f168n;
                    bVar4.u(20, 7, billingResult5);
                    com.google.android.gms.internal.play_billing.q qVar2 = com.google.android.gms.internal.play_billing.t.f5834e;
                    com.google.android.gms.internal.play_billing.x xVar2 = com.google.android.gms.internal.play_billing.x.f5880w;
                    kVar.a(billingResult5, new QueryProductDetailsResult(xVar2, xVar2));
                    return null;
                }
                ArrayList arrayList = new ArrayList();
                ArrayList arrayList2 = new ArrayList();
                String str7 = ((l) queryProductDetailsParams.a.get(0)).f191b;
                com.google.android.gms.internal.play_billing.t tVar = queryProductDetailsParams.a;
                int size = tVar.size();
                int i12 = 0;
                while (true) {
                    if (i12 >= size) {
                        uVar = new ke.u(0, "", arrayList, arrayList2);
                    } else {
                        int i13 = i12 + 20;
                        ArrayList arrayList3 = new ArrayList(tVar.subList(i12, i13 > size ? size : i13));
                        ArrayList<String> arrayList4 = new ArrayList<>();
                        int size2 = arrayList3.size();
                        for (int i14 = 0; i14 < size2; i14++) {
                            arrayList4.add(((l) arrayList3.get(i14)).a);
                        }
                        Bundle bundle2 = new Bundle();
                        bundle2.putStringArrayList("ITEM_ID_LIST", arrayList4);
                        bundle2.putString("playBillingLibraryVersion", bVar4.f127c);
                        try {
                            synchronized (bVar4.a) {
                                try {
                                    dVar3 = bVar4.f133i;
                                } catch (Throwable th2) {
                                    th = th2;
                                    i5 = 43;
                                    while (true) {
                                        try {
                                            throw th;
                                        } catch (Throwable th3) {
                                            th = th3;
                                        }
                                    }
                                }
                            }
                            if (dVar3 == null) {
                                uVar = bVar4.l(g0.f164h, 107, "Service has been reset to null.", exc3);
                            } else {
                                if (bVar4.f142t) {
                                    bVar4.f148z.getClass();
                                }
                                bVar4.o();
                                bVar4.o();
                                bVar4.o();
                                bVar4.o();
                                com.google.android.gms.internal.play_billing.t tVar2 = tVar;
                                int i15 = size;
                                i5 = 43;
                                try {
                                    Bundle F = ((com.google.android.gms.internal.play_billing.b) dVar3).F(true != bVar4.f143u ? 17 : 20, bVar4.f131g.getPackageName(), str7, bundle2, com.google.android.gms.internal.play_billing.s.d(bVar4.f128d, arrayList3, new com.google.android.gms.internal.play_billing.a(), bVar4.C.longValue()));
                                    if (F == null) {
                                        uVar = bVar4.l(g0.f170p, 44, "queryProductDetailsAsync got empty product details response.", null);
                                    } else if (F.containsKey("DETAILS_LIST")) {
                                        ArrayList<String> stringArrayList = F.getStringArrayList("DETAILS_LIST");
                                        if (stringArrayList == null) {
                                            uVar = bVar4.l(g0.f170p, 46, "queryProductDetailsAsync got null response list", null);
                                        } else {
                                            ArrayList arrayList5 = new ArrayList();
                                            int size3 = stringArrayList.size();
                                            for (int i16 = 0; i16 < size3; i16++) {
                                                try {
                                                    ProductDetails productDetails = new ProductDetails(stringArrayList.get(i16));
                                                    com.google.android.gms.internal.play_billing.s.g("BillingClient", "Got product details: ".concat(productDetails.toString()));
                                                    arrayList5.add(productDetails);
                                                } catch (JSONException e14) {
                                                    uVar = bVar4.l(g0.a(6, "Error trying to decode SkuDetails."), 47, "Got a JSON exception trying to decode ProductDetails. \n Exception: ", e14);
                                                }
                                            }
                                            ArrayList<String> stringArrayList2 = F.getStringArrayList("UNFETCHED_PRODUCT_LIST");
                                            new ArrayList();
                                            try {
                                                ArrayList arrayList6 = new ArrayList();
                                                if (stringArrayList2 != null) {
                                                    Iterator<String> it = stringArrayList2.iterator();
                                                    while (it.hasNext()) {
                                                        o oVar = new o(it.next());
                                                        com.google.android.gms.internal.play_billing.s.g("BillingClient", "Got unfetchedProduct: ".concat(oVar.toString()));
                                                        arrayList6.add(oVar);
                                                    }
                                                } else {
                                                    Iterator it2 = arrayList3.iterator();
                                                    while (it2.hasNext()) {
                                                        l lVar = (l) it2.next();
                                                        Iterator it3 = arrayList5.iterator();
                                                        while (true) {
                                                            if (it3.hasNext()) {
                                                                ProductDetails productDetails2 = (ProductDetails) it3.next();
                                                                if (!lVar.a.equals(productDetails2.f3603c) || !lVar.f191b.equals(productDetails2.f3604d)) {
                                                                }
                                                            } else {
                                                                arrayList6.add(new o(new JSONObject().put("productId", lVar.a).put("type", lVar.f191b).put("statusCode", 0).toString()));
                                                            }
                                                        }
                                                    }
                                                }
                                                arrayList.addAll(arrayList5);
                                                arrayList2.addAll(arrayList6);
                                                i12 = i13;
                                                tVar = tVar2;
                                                size = i15;
                                                exc3 = null;
                                            } catch (JSONException e15) {
                                                uVar = bVar4.l(g0.a(6, "Error trying to decode SkuDetails."), 47, "Got a JSON exception trying to decode UnfetchedProduct. \n Exception: ", e15);
                                            }
                                        }
                                    } else {
                                        int a12 = com.google.android.gms.internal.play_billing.s.a("BillingClient", F);
                                        String f2 = com.google.android.gms.internal.play_billing.s.f("BillingClient", F);
                                        uVar = a12 != 0 ? bVar4.l(g0.a(a12, f2), 23, k0.c0(a12, "getSkuDetails() failed for queryProductDetailsAsync. Response code: "), null) : bVar4.l(g0.a(6, f2), 45, "getSkuDetails() returned a bundle with neither an error nor a product detail list for queryProductDetailsAsync.", null);
                                    }
                                } catch (DeadObjectException e16) {
                                    e = e16;
                                    uVar = bVar4.l(g0.f164h, i5, "queryProductDetailsAsync got a remote exception (try to reconnect).", e);
                                    kVar.a(g0.a(uVar.f13352b, (String) uVar.f13355e), new QueryProductDetailsResult((ArrayList) uVar.f13353c, (ArrayList) uVar.f13354d));
                                    return null;
                                } catch (Exception e17) {
                                    e = e17;
                                    uVar = bVar4.l(g0.f162f, i5, "queryProductDetailsAsync got a remote exception (try to reconnect).", e);
                                    kVar.a(g0.a(uVar.f13352b, (String) uVar.f13355e), new QueryProductDetailsResult((ArrayList) uVar.f13353c, (ArrayList) uVar.f13354d));
                                    return null;
                                }
                            }
                        } catch (DeadObjectException e18) {
                            e = e18;
                            i5 = 43;
                        } catch (Exception e19) {
                            e = e19;
                            i5 = 43;
                        }
                    }
                }
                kVar.a(g0.a(uVar.f13352b, (String) uVar.f13355e), new QueryProductDetailsResult((ArrayList) uVar.f13353c, (ArrayList) uVar.f13354d));
                return null;
            case 3:
                b bVar5 = (b) this.f213e;
                int i17 = 9;
                if (bVar5.H(com.facebook.imagepipeline.nativecode.c.f4679c)) {
                    String str8 = (String) this.f214i;
                    if (!TextUtils.isEmpty(str8)) {
                        com.google.android.gms.internal.play_billing.s.g("BillingClient", "Querying owned items, item type: ".concat(String.valueOf(str8)));
                        ArrayList arrayList7 = new ArrayList();
                        boolean z6 = bVar5.f136n;
                        bVar5.f148z.getClass();
                        bVar5.f148z.getClass();
                        long longValue2 = bVar5.C.longValue();
                        Bundle bundle3 = new Bundle();
                        com.google.android.gms.internal.play_billing.s.b(bundle3, bVar5.f128d, longValue2);
                        if (z6) {
                            bundle3.putBoolean("enablePendingPurchases", true);
                        }
                        String str9 = null;
                        while (true) {
                            try {
                                synchronized (bVar5.a) {
                                    try {
                                        dVar4 = bVar5.f133i;
                                    } catch (Throwable th4) {
                                        th = th4;
                                        exc = exc2;
                                        while (true) {
                                            try {
                                                try {
                                                    throw th;
                                                } catch (DeadObjectException e20) {
                                                    e = e20;
                                                    t5 = bVar5.t(g0.f164h, 52, "Got exception trying to get purchases try to reconnect", e);
                                                    list = (List) t5.f11622e;
                                                    if (list != null) {
                                                    }
                                                } catch (Exception e21) {
                                                    e = e21;
                                                    t5 = bVar5.t(g0.f162f, 52, "Got exception trying to get purchases try to reconnect", e);
                                                    list = (List) t5.f11622e;
                                                    if (list != null) {
                                                    }
                                                }
                                            } catch (Throwable th5) {
                                                th = th5;
                                            }
                                        }
                                    }
                                }
                                if (dVar4 == null) {
                                    t5 = bVar5.t(g0.f164h, i10, "Service has been reset to null", exc2);
                                    break;
                                } else {
                                    Bundle E = bVar5.f136n ? ((com.google.android.gms.internal.play_billing.b) dVar4).E(bVar5.f146x ? 26 : bVar5.f145w ? 24 : bVar5.f142t ? 19 : i17, bVar5.f131g.getPackageName(), str8, str9, bundle3) : ((com.google.android.gms.internal.play_billing.b) dVar4).D(bVar5.f131g.getPackageName(), str8, str9);
                                    BillingResult billingResult6 = g0.f162f;
                                    if (E == null) {
                                        com.google.android.gms.internal.play_billing.s.h("BillingClient", "getPurchase() got null owned items list");
                                        i6 = 54;
                                    } else {
                                        int a13 = com.google.android.gms.internal.play_billing.s.a("BillingClient", E);
                                        String f10 = com.google.android.gms.internal.play_billing.s.f("BillingClient", E);
                                        g a14 = BillingResult.a();
                                        a14.f155d = a13;
                                        a14.f157i = f10;
                                        e9 = a14.e();
                                        if (a13 != 0) {
                                            com.google.android.gms.internal.play_billing.s.h("BillingClient", "getPurchase() failed. Response code: " + a13);
                                            i6 = 23;
                                        } else if (E.containsKey("INAPP_PURCHASE_ITEM_LIST") && E.containsKey("INAPP_PURCHASE_DATA_LIST") && E.containsKey("INAPP_DATA_SIGNATURE_LIST")) {
                                            ArrayList<String> stringArrayList3 = E.getStringArrayList("INAPP_PURCHASE_ITEM_LIST");
                                            ArrayList<String> stringArrayList4 = E.getStringArrayList("INAPP_PURCHASE_DATA_LIST");
                                            ArrayList<String> stringArrayList5 = E.getStringArrayList("INAPP_DATA_SIGNATURE_LIST");
                                            if (stringArrayList3 == null) {
                                                com.google.android.gms.internal.play_billing.s.h("BillingClient", "Bundle returned from getPurchase() contains null SKUs list.");
                                                i6 = 56;
                                            } else if (stringArrayList4 == null) {
                                                com.google.android.gms.internal.play_billing.s.h("BillingClient", "Bundle returned from getPurchase() contains null purchases list.");
                                                i6 = 57;
                                            } else if (stringArrayList5 == null) {
                                                com.google.android.gms.internal.play_billing.s.h("BillingClient", "Bundle returned from getPurchase() contains null signatures list.");
                                                i6 = 58;
                                            } else {
                                                e9 = g0.f163g;
                                                i6 = i11;
                                            }
                                        } else {
                                            com.google.android.gms.internal.play_billing.s.h("BillingClient", "Bundle returned from getPurchase() doesn't contain required fields.");
                                            i6 = 55;
                                        }
                                        if (e9 == g0.f163g) {
                                            t5 = bVar5.t(e9, i6, "Purchase bundle invalid", exc2);
                                            break;
                                        } else {
                                            ArrayList<String> stringArrayList6 = E.getStringArrayList("INAPP_PURCHASE_ITEM_LIST");
                                            ArrayList<String> stringArrayList7 = E.getStringArrayList("INAPP_PURCHASE_DATA_LIST");
                                            ArrayList<String> stringArrayList8 = E.getStringArrayList("INAPP_DATA_SIGNATURE_LIST");
                                            exc = exc2;
                                            int i18 = 0;
                                            boolean z7 = false;
                                            while (i18 < stringArrayList7.size()) {
                                                String str10 = stringArrayList7.get(i18);
                                                String str11 = stringArrayList8.get(i18);
                                                ArrayList<String> arrayList8 = stringArrayList6;
                                                com.google.android.gms.internal.play_billing.s.g("BillingClient", "Sku is owned: ".concat(String.valueOf(stringArrayList6.get(i18))));
                                                try {
                                                    Purchase purchase = new Purchase(str10, str11);
                                                    bVar5.A.isEmpty();
                                                    JSONObject jSONObject = purchase.f3628c;
                                                    if (TextUtils.isEmpty(jSONObject.optString("token", jSONObject.optString("purchaseToken")))) {
                                                        com.google.android.gms.internal.play_billing.s.h("BillingClient", "BUG: empty/null token!");
                                                        z7 = true;
                                                    }
                                                    arrayList7.add(purchase);
                                                    i18++;
                                                    stringArrayList6 = arrayList8;
                                                } catch (JSONException e22) {
                                                    t5 = bVar5.t(g0.f162f, 51, "Got an exception trying to decode the purchase!", e22);
                                                }
                                            }
                                            if (z7) {
                                                i17 = 9;
                                                bVar5.u(26, 9, billingResult6);
                                            } else {
                                                i17 = 9;
                                            }
                                            str9 = E.getString("INAPP_CONTINUATION_TOKEN");
                                            com.google.android.gms.internal.play_billing.s.g("BillingClient", "Continuation token: ".concat(String.valueOf(str9)));
                                            if (TextUtils.isEmpty(str9)) {
                                                t5 = new io.sentry.internal.debugmeta.c(1, g0.f163g, arrayList7);
                                            } else {
                                                exc2 = exc;
                                                i10 = 107;
                                                i11 = 1;
                                            }
                                        }
                                    }
                                    e9 = billingResult6;
                                    if (e9 == g0.f163g) {
                                    }
                                }
                            } catch (DeadObjectException e23) {
                                e = e23;
                                exc = exc2;
                            } catch (Exception e24) {
                                e = e24;
                                exc = exc2;
                            }
                        }
                        list = (List) t5.f11622e;
                        if (list != null) {
                            ((com.discord.billing.b) this.f215v).b((BillingResult) t5.f11623i, list);
                            return exc;
                        }
                        com.discord.billing.b bVar6 = (com.discord.billing.b) this.f215v;
                        BillingResult billingResult7 = (BillingResult) t5.f11623i;
                        com.google.android.gms.internal.play_billing.q qVar3 = com.google.android.gms.internal.play_billing.t.f5834e;
                        bVar6.b(billingResult7, com.google.android.gms.internal.play_billing.x.f5880w);
                        return exc;
                    }
                    com.google.android.gms.internal.play_billing.s.h("BillingClient", "Please provide a valid product type.");
                    BillingResult billingResult8 = g0.f160d;
                    bVar5.u(50, 9, billingResult8);
                    com.discord.billing.b bVar7 = (com.discord.billing.b) this.f215v;
                    com.google.android.gms.internal.play_billing.q qVar4 = com.google.android.gms.internal.play_billing.t.f5834e;
                    bVar7.b(billingResult8, com.google.android.gms.internal.play_billing.x.f5880w);
                } else {
                    BillingResult billingResult9 = g0.f164h;
                    bVar5.u(2, 9, billingResult9);
                    com.discord.billing.b bVar8 = (com.discord.billing.b) this.f215v;
                    com.google.android.gms.internal.play_billing.q qVar5 = com.google.android.gms.internal.play_billing.t.f5834e;
                    bVar8.b(billingResult9, com.google.android.gms.internal.play_billing.x.f5880w);
                }
                return null;
            case 4:
                Promise promise = (Promise) this.f215v;
                jl.e eVar = (jl.e) this.f213e;
                try {
                    Activity activity = (Activity) this.f214i;
                    eVar.getClass();
                    file = new File(jl.e.m(activity));
                } catch (Exception e25) {
                    e25.printStackTrace();
                    promise.reject("E_ERROR_WHILE_CLEANING_FILES", e25.getMessage());
                }
                if (!file.exists()) {
                    throw new Exception("File does not exist");
                }
                jl.e.f(file);
                promise.resolve(null);
                return null;
            default:
                Promise promise2 = (Promise) this.f215v;
                try {
                    str2 = (String) this.f214i;
                    if (str2.startsWith("file://")) {
                        str2 = str2.substring(7);
                    }
                    file2 = new File(str2);
                } catch (Exception e26) {
                    e26.printStackTrace();
                    promise2.reject("E_ERROR_WHILE_CLEANING_FILES", e26.getMessage());
                }
                if (!file2.exists()) {
                    throw new Exception("File does not exist. Path: " + str2);
                }
                ((jl.e) this.f213e).getClass();
                jl.e.f(file2);
                promise2.resolve(null);
                return null;
        }
    }

    public q(b bVar, com.discord.billing.b bVar2, String str) {
        this.f212d = 3;
        this.f215v = bVar2;
        this.f214i = str;
        Objects.requireNonNull(bVar);
        this.f213e = bVar;
    }

    public q(String str, jl.e eVar, Promise promise) {
        this.f212d = 5;
        this.f214i = str;
        this.f213e = eVar;
        this.f215v = promise;
    }
}
