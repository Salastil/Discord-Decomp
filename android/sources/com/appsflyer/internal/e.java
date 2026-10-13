package com.appsflyer.internal;

import android.content.SharedPreferences;
import com.appsflyer.internal.AFa1uSDK;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;

/* loaded from: classes.dex */
public final /* synthetic */ class e implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3670d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f3671e;

    public /* synthetic */ e(int i5, Object obj) {
        this.f3670d = i5;
        this.f3671e = obj;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        Unit monetizationNetwork;
        SharedPreferences o_;
        switch (this.f3670d) {
            case 0:
                monetizationNetwork = ((AFa1uSDK.C0010AFa1uSDK) this.f3671e).getMonetizationNetwork();
                return monetizationNetwork;
            default:
                o_ = ((AFc1dSDK) this.f3671e).o_();
                return o_;
        }
    }
}
