package com.discord.permissions;

import com.facebook.react.bridge.Callback;
import com.facebook.react.bridge.WritableNativeMap;
import jl.e;
import kotlin.jvm.functions.Function0;

/* loaded from: classes.dex */
public final /* synthetic */ class d implements Callback {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4336d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f4337e;

    public /* synthetic */ d(int i5, Object obj) {
        this.f4336d = i5;
        this.f4337e = obj;
    }

    @Override // com.facebook.react.bridge.Callback
    public final void invoke(Object[] objArr) {
        switch (this.f4336d) {
            case 0:
                NativePermissionPromise.generate$lambda$1((Function0) this.f4337e, objArr);
                break;
            default:
                e eVar = (e) this.f4337e;
                eVar.getClass();
                WritableNativeMap writableNativeMap = (WritableNativeMap) objArr[0];
                eVar.f12835c0.c(writableNativeMap.getString("code"), writableNativeMap.getString("message"));
                break;
        }
    }
}
