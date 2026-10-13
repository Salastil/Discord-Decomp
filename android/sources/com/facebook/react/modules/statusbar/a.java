package com.facebook.react.modules.statusbar;

import android.app.Activity;
import android.view.View;
import androidx.core.view.WindowInsetsControllerCompat;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4981d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Activity f4982e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ String f4983i;

    public /* synthetic */ a(Activity activity, String str, int i5) {
        this.f4981d = i5;
        this.f4982e = activity;
        this.f4983i = str;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f4981d) {
            case 0:
                StatusBarModule.setStyle$lambda$5(this.f4982e, this.f4983i);
                break;
            default:
                Activity activity = this.f4982e;
                View decorView = activity.getWindow().getDecorView();
                Intrinsics.checkNotNullExpressionValue(decorView, "getDecorView(...)");
                new WindowInsetsControllerCompat(activity.getWindow(), decorView).c(Intrinsics.areEqual(this.f4983i, "dark"));
                break;
        }
    }
}
