package com.discord.billing.types;

import a5.a0;
import a5.f;
import a5.i;
import a5.j;
import android.text.TextUtils;
import com.android.billingclient.api.ProductDetails;
import com.android.billingclient.api.a;
import e4.e;
import e4.m;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;
import k0.d;
import kotlin.Metadata;
import kotlin.collections.b0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.Charsets;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u00008\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0007\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0006\bÀ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J<\u0010\u0004\u001a\u0004\u0018\u00010\u00052\u000e\u0010\u0006\u001a\n\u0012\u0004\u0012\u00020\b\u0018\u00010\u00072\u0006\u0010\t\u001a\u00020\n2\b\u0010\u000b\u001a\u0004\u0018\u00010\n2\b\u0010\f\u001a\u0004\u0018\u00010\n2\u0006\u0010\r\u001a\u00020\nJD\u0010\u000e\u001a\u0004\u0018\u00010\u00052\f\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\b0\u00072\u0006\u0010\t\u001a\u00020\n2\b\u0010\u000b\u001a\u0004\u0018\u00010\n2\b\u0010\f\u001a\u0004\u0018\u00010\n2\u0006\u0010\r\u001a\u00020\n2\b\u0010\u000f\u001a\u0004\u0018\u00010\nJ\u0010\u0010\u0010\u001a\u00020\n2\u0006\u0010\r\u001a\u00020\nH\u0002J\u0010\u0010\u0011\u001a\u00020\u00122\u0006\u0010\u0006\u001a\u00020\bH\u0002J\u0010\u0010\u0013\u001a\u00020\u00142\u0006\u0010\u0006\u001a\u00020\bH\u0002J\u0018\u0010\u0015\u001a\u00020\u00162\u0006\u0010\u0017\u001a\u00020\n2\u0006\u0010\u0018\u001a\u00020\nH\u0002J\u0018\u0010\u0019\u001a\u00020\u00162\u0006\u0010\u001a\u001a\u00020\b2\u0006\u0010\u001b\u001a\u00020\bH\u0002¨\u0006\u001c"}, d2 = {"Lcom/discord/billing/types/BillingFlowParams;", "", "<init>", "()V", "create", "Lcom/android/billingclient/api/BillingFlowParams;", "productDetails", "", "Lcom/android/billingclient/api/ProductDetails;", "productId", "", "productIdOld", "purchaseToken", "userId", "createWithProductDetails", "offerId", "getObfuscatedUserId", "getPriceAmountMicros", "", "getPricingPhase", "Lcom/android/billingclient/api/ProductDetails$PricingPhase;", "calculateStandardizedUnits", "", "oldPeriod", "newPeriod", "getReplacementMode", "oldProductDetails", "newProductDetails", "billing_androidRelease"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nBillingFlowParams.kt\nKotlin\n*S Kotlin\n*F\n+ 1 BillingFlowParams.kt\ncom/discord/billing/types/BillingFlowParams\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n+ 3 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n+ 4 _Arrays.kt\nkotlin/collections/ArraysKt___ArraysKt\n*L\n1#1,176:1\n1#2:177\n295#3,2:178\n295#3,2:180\n295#3,2:185\n12897#4,3:182\n*S KotlinDebug\n*F\n+ 1 BillingFlowParams.kt\ncom/discord/billing/types/BillingFlowParams\n*L\n76#1:178,2\n78#1:180,2\n135#1:185,2\n113#1:182,3\n*E\n"})
/* loaded from: classes.dex */
public final class BillingFlowParams {

    @NotNull
    public static final BillingFlowParams INSTANCE = new BillingFlowParams();

    private BillingFlowParams() {
    }

    private final int calculateStandardizedUnits(String oldPeriod, String newPeriod) {
        if (Intrinsics.areEqual(oldPeriod, "P1M") && Intrinsics.areEqual(newPeriod, "P1Y")) {
            return 12;
        }
        if (Intrinsics.areEqual(oldPeriod, "P1M") && Intrinsics.areEqual(newPeriod, "P6M")) {
            return 6;
        }
        if (Intrinsics.areEqual(oldPeriod, "P1M") && Intrinsics.areEqual(newPeriod, "P3M")) {
            return 3;
        }
        if (Intrinsics.areEqual(oldPeriod, "P3M") && Intrinsics.areEqual(newPeriod, "P1Y")) {
            return 4;
        }
        if (Intrinsics.areEqual(oldPeriod, "P3M") && Intrinsics.areEqual(newPeriod, "P6M")) {
            return 2;
        }
        return (Intrinsics.areEqual(oldPeriod, "P6M") && Intrinsics.areEqual(newPeriod, "P1Y")) ? 2 : 1;
    }

    private final String getObfuscatedUserId(String userId) {
        MessageDigest messageDigest = MessageDigest.getInstance("SHA-256");
        byte[] bytes = userId.getBytes(Charsets.UTF_8);
        Intrinsics.checkNotNullExpressionValue(bytes, "getBytes(...)");
        byte[] digest = messageDigest.digest(bytes);
        Intrinsics.checkNotNullExpressionValue(digest, "digest(...)");
        String str = "";
        for (byte b10 : digest) {
            String format = String.format("%02x", Arrays.copyOf(new Object[]{Byte.valueOf(b10)}, 1));
            Intrinsics.checkNotNullExpressionValue(format, "format(...)");
            str = d.k(str, format);
        }
        return str;
    }

    private final long getPriceAmountMicros(ProductDetails productDetails) {
        if (!Intrinsics.areEqual(productDetails.f3604d, "inapp")) {
            if (Intrinsics.areEqual(productDetails.f3604d, "subs")) {
                return getPricingPhase(productDetails).f3610b;
            }
            return 0L;
        }
        i a = productDetails.a();
        if (a != null) {
            return a.f177b;
        }
        return 0L;
    }

    private final ProductDetails.PricingPhase getPricingPhase(ProductDetails productDetails) {
        j jVar;
        a aVar;
        ArrayList arrayList;
        Object obj;
        if (Intrinsics.areEqual(productDetails.f3604d, "inapp")) {
            throw new AssertionError("Attempted to retrieve pricing phase for one time purchase");
        }
        ArrayList arrayList2 = productDetails.f3609i;
        ProductDetails.PricingPhase pricingPhase = null;
        if (arrayList2 != null) {
            Iterator it = arrayList2.iterator();
            while (true) {
                if (!it.hasNext()) {
                    obj = null;
                    break;
                }
                obj = it.next();
                if (((j) obj).f185b == null) {
                    break;
                }
            }
            jVar = (j) obj;
        } else {
            jVar = null;
        }
        if (jVar != null && (aVar = jVar.f187d) != null && (arrayList = aVar.a) != null) {
            pricingPhase = (ProductDetails.PricingPhase) arrayList.get(0);
        }
        if (pricingPhase != null) {
            return pricingPhase;
        }
        throw new AssertionError("No pricing phase found for subscription product details");
    }

    private final int getReplacementMode(ProductDetails oldProductDetails, ProductDetails newProductDetails) {
        long priceAmountMicros = getPriceAmountMicros(oldProductDetails);
        long priceAmountMicros2 = getPriceAmountMicros(newProductDetails);
        String str = getPricingPhase(oldProductDetails).f3612d;
        Intrinsics.checkNotNullExpressionValue(str, "getBillingPeriod(...)");
        String str2 = getPricingPhase(newProductDetails).f3612d;
        Intrinsics.checkNotNullExpressionValue(str2, "getBillingPeriod(...)");
        return priceAmountMicros2 / ((long) calculateStandardizedUnits(str, str2)) <= priceAmountMicros ? 6 : 2;
    }

    public final com.android.billingclient.api.BillingFlowParams create(List<ProductDetails> productDetails, @NotNull String productId, String productIdOld, String purchaseToken, @NotNull String userId) {
        ProductDetails productDetails2;
        ProductDetails productDetails3;
        Object obj;
        Object obj2;
        Intrinsics.checkNotNullParameter(productId, "productId");
        Intrinsics.checkNotNullParameter(userId, "userId");
        if (productDetails != null) {
            Iterator<T> it = productDetails.iterator();
            while (true) {
                if (!it.hasNext()) {
                    obj2 = null;
                    break;
                }
                obj2 = it.next();
                if (Intrinsics.areEqual(((ProductDetails) obj2).f3603c, productId)) {
                    break;
                }
            }
            productDetails2 = (ProductDetails) obj2;
        } else {
            productDetails2 = null;
        }
        if (productDetails != null) {
            Iterator<T> it2 = productDetails.iterator();
            while (true) {
                if (!it2.hasNext()) {
                    obj = null;
                    break;
                }
                obj = it2.next();
                if (Intrinsics.areEqual(((ProductDetails) obj).f3603c, productIdOld)) {
                    break;
                }
            }
            productDetails3 = (ProductDetails) obj;
        } else {
            productDetails3 = null;
        }
        if (productDetails2 == null || (productIdOld != null && productDetails3 == null)) {
            return null;
        }
        m mVar = new m(1, false);
        f fVar = new f();
        fVar.f153b = 0;
        fVar.a = true;
        mVar.f7965v = fVar;
        e eVar = new e(1, false);
        eVar.f7943e = productDetails2;
        if (productDetails2.a() != null) {
            productDetails2.a().getClass();
            String str = productDetails2.a().f179d;
            if (str != null) {
                eVar.f7944i = str;
            }
        }
        if (((ProductDetails) eVar.f7943e) == null) {
            throw new NullPointerException("ProductDetails is required for constructing ProductDetailsParams.");
        }
        mVar.f7964i = new ArrayList(b0.c(new a5.e(eVar)));
        mVar.f7963e = getObfuscatedUserId(userId);
        if (productDetails3 != null && purchaseToken != null) {
            int replacementMode = INSTANCE.getReplacementMode(productDetails3, productDetails2);
            boolean z5 = (TextUtils.isEmpty(purchaseToken) && TextUtils.isEmpty(null)) ? false : true;
            boolean isEmpty = TextUtils.isEmpty(null);
            if (z5 && !isEmpty) {
                throw new IllegalArgumentException("Please provide Old SKU purchase information(token/id) or original external transaction id, not both.");
            }
            if (!z5 && isEmpty) {
                throw new IllegalArgumentException("Old SKU purchase information(token/id) or original external transaction id must be provided.");
            }
            a0 a0Var = new a0(1, (short) 0);
            a0Var.f125i = purchaseToken;
            a0Var.f124e = replacementMode;
            f fVar2 = new f();
            fVar2.f154c = (String) a0Var.f125i;
            fVar2.f153b = a0Var.f124e;
            mVar.f7965v = fVar2;
        }
        return mVar.R();
    }

    /* JADX WARN: Removed duplicated region for block: B:39:0x00d3  */
    /* JADX WARN: Removed duplicated region for block: B:44:0x00e4  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final com.android.billingclient.api.BillingFlowParams createWithProductDetails(@NotNull List<ProductDetails> productDetails, @NotNull String productId, String productIdOld, String purchaseToken, @NotNull String userId, String offerId) {
        Object obj;
        Object obj2;
        Object obj3;
        String str;
        Object obj4;
        Intrinsics.checkNotNullParameter(productDetails, "productDetails");
        Intrinsics.checkNotNullParameter(productId, "productId");
        Intrinsics.checkNotNullParameter(userId, "userId");
        Iterator<T> it = productDetails.iterator();
        while (true) {
            if (!it.hasNext()) {
                obj = null;
                break;
            }
            obj = it.next();
            if (Intrinsics.areEqual(((ProductDetails) obj).f3603c, productId)) {
                break;
            }
        }
        ProductDetails productDetails2 = (ProductDetails) obj;
        if (productDetails2 == null) {
            throw new AssertionError("Could not find product detail for new product");
        }
        ArrayList arrayList = productDetails2.f3609i;
        Iterator<T> it2 = productDetails.iterator();
        while (true) {
            if (!it2.hasNext()) {
                obj2 = null;
                break;
            }
            obj2 = it2.next();
            if (Intrinsics.areEqual(((ProductDetails) obj2).f3603c, productIdOld)) {
                break;
            }
        }
        ProductDetails productDetails3 = (ProductDetails) obj2;
        if (productIdOld != null && productDetails3 == null) {
            return null;
        }
        ArrayList arrayList2 = new ArrayList();
        e eVar = new e(1, false);
        eVar.f7943e = productDetails2;
        if (productDetails2.a() != null) {
            productDetails2.a().getClass();
            String str2 = productDetails2.a().f179d;
            if (str2 != null) {
                eVar.f7944i = str2;
            }
        }
        Intrinsics.checkNotNullExpressionValue(eVar, "setProductDetails(...)");
        if (Intrinsics.areEqual(productDetails2.f3604d, "subs")) {
            if (offerId != null) {
                if (arrayList != null) {
                    Iterator it3 = arrayList.iterator();
                    while (true) {
                        if (!it3.hasNext()) {
                            obj4 = null;
                            break;
                        }
                        obj4 = it3.next();
                        if (Intrinsics.areEqual(((j) obj4).f185b, offerId)) {
                            break;
                        }
                    }
                    j jVar = (j) obj4;
                    if (jVar != null) {
                        str = jVar.f186c;
                        if (str != null) {
                            throw new AssertionError(a3.e.l("Could not find offer token for productId: ", productDetails2.f3603c, " offerId: ", offerId));
                        }
                        if (TextUtils.isEmpty(str)) {
                            throw new IllegalArgumentException("offerToken can not be empty");
                        }
                        eVar.f7944i = str;
                    }
                }
                str = null;
                if (str != null) {
                }
            } else {
                if (arrayList != null) {
                    Iterator it4 = arrayList.iterator();
                    while (true) {
                        if (!it4.hasNext()) {
                            obj3 = null;
                            break;
                        }
                        obj3 = it4.next();
                        if (((j) obj3).f185b == null) {
                            break;
                        }
                    }
                    j jVar2 = (j) obj3;
                    if (jVar2 != null) {
                        str = jVar2.f186c;
                        if (str != null) {
                        }
                    }
                }
                str = null;
                if (str != null) {
                }
            }
        }
        if (((ProductDetails) eVar.f7943e) == null) {
            throw new NullPointerException("ProductDetails is required for constructing ProductDetailsParams.");
        }
        a5.e eVar2 = new a5.e(eVar);
        Intrinsics.checkNotNullExpressionValue(eVar2, "build(...)");
        arrayList2.add(eVar2);
        m mVar = new m(1, false);
        f fVar = new f();
        fVar.f153b = 0;
        fVar.a = true;
        mVar.f7965v = fVar;
        mVar.f7964i = new ArrayList(arrayList2);
        mVar.f7963e = getObfuscatedUserId(userId);
        if (productDetails3 != null && purchaseToken != null) {
            int replacementMode = INSTANCE.getReplacementMode(productDetails3, productDetails2);
            boolean z5 = (TextUtils.isEmpty(purchaseToken) && TextUtils.isEmpty(null)) ? false : true;
            boolean isEmpty = TextUtils.isEmpty(null);
            if (z5 && !isEmpty) {
                throw new IllegalArgumentException("Please provide Old SKU purchase information(token/id) or original external transaction id, not both.");
            }
            if (!z5 && isEmpty) {
                throw new IllegalArgumentException("Old SKU purchase information(token/id) or original external transaction id must be provided.");
            }
            a0 a0Var = new a0(1, (short) 0);
            a0Var.f125i = purchaseToken;
            a0Var.f124e = replacementMode;
            f fVar2 = new f();
            fVar2.f154c = (String) a0Var.f125i;
            fVar2.f153b = a0Var.f124e;
            mVar.f7965v = fVar2;
        }
        return mVar.R();
    }
}
