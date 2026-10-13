package com.facebook.react.devsupport;

import android.app.Activity;
import androidx.core.view.WindowInsetsControllerCompat;
import com.facebook.react.modules.core.JavaTimerManager;
import com.facebook.react.modules.statusbar.StatusBarModule;
import com.swmansion.reanimated.keyboard.WindowsInsetsManager;
import com.swmansion.rnscreens.v;
import hc.w;
import ke.d0;

/* loaded from: classes3.dex */
public final /* synthetic */ class e implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4898d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ boolean f4899e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f4900i;

    public /* synthetic */ e(Object obj, boolean z5, int i5) {
        this.f4898d = i5;
        this.f4900i = obj;
        this.f4899e = z5;
    }

    @Override // java.lang.Runnable
    public final void run() {
        int i5 = this.f4898d;
        boolean z5 = this.f4899e;
        Object obj = this.f4900i;
        switch (i5) {
            case 0:
                DebugOverlayController.setFpsDebugViewVisible$lambda$0(z5, (DebugOverlayController) obj);
                break;
            case 1:
                JavaTimerManager.setSendIdleEvents$lambda$7((JavaTimerManager) obj, z5);
                break;
            case 2:
                StatusBarModule.setHidden$lambda$3((Activity) obj, z5);
                break;
            case 3:
                ((WindowsInsetsManager) obj).lambda$updateWindowDecor$0(z5);
                break;
            case 4:
                v vVar = (v) obj;
                if (!z5) {
                    vVar.u(com.swmansion.rnscreens.t.f6791e, vVar);
                    vVar.v(0.0f, false);
                    break;
                } else {
                    vVar.u(com.swmansion.rnscreens.t.f6790d, vVar);
                    vVar.v(1.0f, false);
                    break;
                }
            case 5:
                WindowInsetsControllerCompat windowInsetsControllerCompat = (WindowInsetsControllerCompat) obj;
                if (!z5) {
                    windowInsetsControllerCompat.e(1);
                    break;
                } else {
                    windowInsetsControllerCompat.a(1);
                    break;
                }
            default:
                w wVar = (w) ((e4.c) obj).f7940i;
                int i6 = d0.a;
                com.google.android.exoplayer2.d dVar = wVar.f9929d;
                if (dVar.a0 != z5) {
                    dVar.a0 = z5;
                    dVar.f5363l.e(23, new hc.t(z5, 1));
                    break;
                }
                break;
        }
    }

    public /* synthetic */ e(boolean z5, Object obj, int i5) {
        this.f4898d = i5;
        this.f4899e = z5;
        this.f4900i = obj;
    }
}
