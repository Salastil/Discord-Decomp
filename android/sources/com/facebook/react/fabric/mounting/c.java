package com.facebook.react.fabric.mounting;

import android.view.ViewGroup;
import com.facebook.react.modules.toast.ToastModule;
import kotlin.jvm.internal.Ref;

/* loaded from: classes3.dex */
public final /* synthetic */ class c implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4961d = 0;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f4962e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ int f4963i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f4964v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ Object f4965w;

    public /* synthetic */ c(int i5, int i6, Ref.IntRef intRef, ViewGroup viewGroup) {
        this.f4962e = i5;
        this.f4963i = i6;
        this.f4964v = intRef;
        this.f4965w = viewGroup;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f4961d) {
            case 0:
                SurfaceMountingManager.removeViewAtInternal$lambda$10(this.f4962e, this.f4963i, (Ref.IntRef) this.f4964v, (ViewGroup) this.f4965w);
                break;
            default:
                ToastModule.showWithGravity$lambda$1((ToastModule) this.f4964v, (String) this.f4965w, this.f4962e, this.f4963i);
                break;
        }
    }

    public /* synthetic */ c(ToastModule toastModule, String str, int i5, int i6) {
        this.f4964v = toastModule;
        this.f4965w = str;
        this.f4962e = i5;
        this.f4963i = i6;
    }
}
