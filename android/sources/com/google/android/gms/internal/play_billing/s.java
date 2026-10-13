package com.google.android.gms.internal.play_billing;

import android.content.Intent;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.Log;
import com.android.billingclient.api.BillingResult;
import com.android.billingclient.api.Purchase;
import java.util.ArrayList;
import java.util.Set;
import org.json.JSONException;

/* loaded from: classes3.dex */
public abstract class s {
    public static final int a = Runtime.getRuntime().availableProcessors();

    public static int a(String str, Bundle bundle) {
        if (bundle == null) {
            h(str, "Unexpected null bundle received!");
            return 6;
        }
        Object obj = bundle.get("RESPONSE_CODE");
        if (obj == null) {
            g(str, "getResponseCodeFromBundle() got null response code, assuming OK");
            return 0;
        }
        if (obj instanceof Integer) {
            return ((Integer) obj).intValue();
        }
        h(str, "Unexpected type for bundle response code: ".concat(obj.getClass().getName()));
        return 6;
    }

    public static void b(Bundle bundle, String str, long j) {
        bundle.putString("playBillingLibraryVersion", z4.a.a);
        if (str != null) {
            bundle.putString("playBillingLibraryWrapperVersion", str);
        }
        bundle.putLong("billingClientSessionId", j);
    }

    public static Bundle c(int i5, BillingResult billingResult) {
        Bundle bundle = new Bundle();
        bundle.putInt("RESPONSE_CODE", billingResult.a);
        bundle.putString("DEBUG_MESSAGE", billingResult.f3601c);
        bundle.putInt("LOG_REASON", com.discord.chat.bridge.botuikit.a.b(i5));
        return bundle;
    }

    public static Bundle d(String str, ArrayList arrayList, a aVar, long j) {
        Bundle bundle = new Bundle();
        b(bundle, str, j);
        bundle.putBoolean("enablePendingPurchases", true);
        bundle.putString("SKU_DETAILS_RESPONSE_FORMAT", "PRODUCT_DETAILS");
        q qVar = t.f5834e;
        Object[] objArr = {"subs", "inapp"};
        for (int i5 = 0; i5 < 2; i5++) {
            if (objArr[i5] == null) {
                throw new NullPointerException(k0.d.i(i5, "at index "));
            }
        }
        bundle.putStringArrayList("PRODUCT_TYPES_TO_RETURN_MULTIPLE_OFFERS", new ArrayList<>(t.k(2, objArr)));
        Object[] objArr2 = {"inapp"};
        for (int i6 = 0; i6 < 1; i6++) {
            if (objArr2[i6] == null) {
                throw new NullPointerException(k0.d.i(i6, "at index "));
            }
        }
        bundle.putStringArrayList("PRODUCT_TYPES_TO_RETURN_PREORDER_OFFERS", new ArrayList<>(t.k(1, objArr2)));
        Object[] objArr3 = {"inapp"};
        for (int i10 = 0; i10 < 1; i10++) {
            if (objArr3[i10] == null) {
                throw new NullPointerException(k0.d.i(i10, "at index "));
            }
        }
        bundle.putStringArrayList("PRODUCT_TYPES_TO_RETURN_RENT_OFFERS", new ArrayList<>(t.k(1, objArr3)));
        bundle.putBoolean("SHOULD_RETURN_UNFETCHED_PRODUCTS", true);
        ArrayList<String> arrayList2 = new ArrayList<>();
        ArrayList<String> arrayList3 = new ArrayList<>();
        ArrayList<String> arrayList4 = new ArrayList<>();
        int size = arrayList.size();
        boolean z5 = false;
        boolean z6 = false;
        for (int i11 = 0; i11 < size; i11++) {
            a5.l lVar = (a5.l) arrayList.get(i11);
            arrayList2.add(null);
            z5 |= !TextUtils.isEmpty(null);
            lVar.getClass();
            arrayList4.add(null);
            z6 |= !TextUtils.isEmpty(null);
            if (lVar.f191b.equals("first_party")) {
                throw new NullPointerException("Serialized DocId is required for constructing ExtraParams to query ProductDetails for all first party products.");
            }
        }
        if (z5) {
            bundle.putStringArrayList("SKU_OFFER_ID_TOKEN_LIST", arrayList2);
        }
        if (!arrayList3.isEmpty()) {
            bundle.putStringArrayList("SKU_SERIALIZED_DOCID_LIST", arrayList3);
        }
        if (!TextUtils.isEmpty(null)) {
            bundle.putString("accountName", null);
        }
        if (z6) {
            bundle.putStringArrayList("SKU_DYNAMIC_PRODUCT_TOKEN_LIST", arrayList4);
        }
        return bundle;
    }

    public static BillingResult e(Intent intent, String str) {
        if (intent != null) {
            a5.g a10 = BillingResult.a();
            a10.f155d = a(str, intent.getExtras());
            a10.f157i = f(str, intent.getExtras());
            return a10.e();
        }
        h("BillingHelper", "Got null intent!");
        a5.g a11 = BillingResult.a();
        a11.f155d = 6;
        a11.f157i = "An internal error occurred.";
        return a11.e();
    }

    public static String f(String str, Bundle bundle) {
        if (bundle == null) {
            h(str, "Unexpected null bundle received!");
            return "";
        }
        Object obj = bundle.get("DEBUG_MESSAGE");
        if (obj == null) {
            g(str, "getDebugMessageFromBundle() got null response code, assuming OK");
            return "";
        }
        if (obj instanceof String) {
            return (String) obj;
        }
        h(str, "Unexpected type for debug message: ".concat(obj.getClass().getName()));
        return "";
    }

    public static void g(String str, String str2) {
        if (Log.isLoggable(str, 2)) {
            if (str2.isEmpty()) {
                Log.v(str, str2);
                return;
            }
            int i5 = 40000;
            while (!str2.isEmpty() && i5 > 0) {
                int min = Math.min(str2.length(), Math.min(4000, i5));
                Log.v(str, str2.substring(0, min));
                str2 = str2.substring(min);
                i5 -= min;
            }
        }
    }

    public static void h(String str, String str2) {
        if (Log.isLoggable(str, 5)) {
            Log.w(str, str2);
        }
    }

    public static void i(String str, String str2, Throwable th2) {
        try {
            if (Log.isLoggable(str, 5)) {
                if (th2 == null) {
                    Log.w(str, str2);
                } else {
                    Log.w(str, str2, th2);
                }
            }
        } catch (Throwable unused) {
        }
    }

    public static Purchase j(String str, String str2, Set set) {
        Purchase purchase;
        Purchase purchase2 = null;
        if (str == null || str2 == null) {
            g("BillingHelper", "Received a null purchase data.");
            return null;
        }
        try {
            purchase = new Purchase(str, str2);
        } catch (JSONException e9) {
            e = e9;
        }
        try {
            set.isEmpty();
            return purchase;
        } catch (JSONException e10) {
            e = e10;
            purchase2 = purchase;
            h("BillingHelper", "Got JSONException while parsing purchase data: ".concat(e.toString()));
            return purchase2;
        }
    }
}
