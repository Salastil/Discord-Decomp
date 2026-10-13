package a1;

import android.app.Activity;
import android.view.View;
import android.view.Window;
import com.discord.react.utilities.ReactViewExtensionsKt;
import com.facebook.react.ReactInstanceManager;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.runtime.ReactHostImpl;
import com.facebook.react.uimanager.ReactRoot;
import com.facebook.react.views.debuggingoverlay.DebuggingOverlay;
import com.google.android.material.sidesheet.SideSheetBehavior;
import hc.w;
import java.lang.ref.WeakReference;

/* loaded from: classes.dex */
public final /* synthetic */ class l implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f31d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f32e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f33i;

    public /* synthetic */ l(int i5, int i6, Object obj) {
        this.f31d = i6;
        this.f33i = obj;
        this.f32e = i5;
    }

    @Override // java.lang.Runnable
    public final void run() {
        Activity currentActivity;
        Window window;
        switch (this.f31d) {
            case 0:
                ((b) this.f33i).g(this.f32e);
                break;
            case 1:
                ReactInstanceManager.lambda$attachRootViewToInstance$6(this.f32e, (ReactRoot) this.f33i);
                break;
            case 2:
                ReactHostImpl.createMemoryPressureListener$lambda$14$lambda$13((WeakReference) this.f33i, this.f32e);
                break;
            case 3:
                hc.d dVar = ((hc.c) this.f33i).f9637e;
                int i5 = this.f32e;
                if (i5 != -3 && i5 != -2) {
                    if (i5 == -1) {
                        w wVar = dVar.f9651c;
                        if (wVar != null) {
                            com.google.android.exoplayer2.d dVar2 = wVar.f9929d;
                            boolean g6 = dVar2.g();
                            dVar2.u0(-1, g6 ? 2 : 1, g6);
                        }
                        dVar.a();
                        break;
                    } else if (i5 == 1) {
                        dVar.b(1);
                        w wVar2 = dVar.f9651c;
                        if (wVar2 != null) {
                            com.google.android.exoplayer2.d dVar3 = wVar2.f9929d;
                            dVar3.u0(1, 1, dVar3.g());
                            break;
                        }
                    } else {
                        com.discord.chat.bridge.botuikit.a.q(i5, "Unknown focus change type: ", "AudioFocusManager");
                        break;
                    }
                } else if (i5 == -2) {
                    w wVar3 = dVar.f9651c;
                    if (wVar3 != null) {
                        com.google.android.exoplayer2.d dVar4 = wVar3.f9929d;
                        boolean g10 = dVar4.g();
                        dVar4.u0(0, g10 ? 2 : 1, g10);
                    }
                    dVar.b(2);
                    break;
                } else {
                    dVar.b(3);
                    break;
                }
                break;
            case 4:
                DebuggingOverlay.onDraw$lambda$1((DebuggingOverlay) this.f33i, this.f32e);
                break;
            case 5:
                SideSheetBehavior sideSheetBehavior = (SideSheetBehavior) this.f33i;
                View view = (View) sideSheetBehavior.f6099p.get();
                if (view != null) {
                    sideSheetBehavior.z(view, this.f32e, false);
                    break;
                }
                break;
            case 6:
                ReactViewExtensionsKt.queueManualLayout$lambda$3((ReactContext) this.f33i, this.f32e);
                break;
            default:
                zl.c cVar = (zl.c) this.f33i;
                int d6 = tl.c.d(cVar.a);
                int i6 = this.f32e;
                if (d6 != i6 && (currentActivity = cVar.a.getCurrentActivity()) != null && (window = currentActivity.getWindow()) != null) {
                    window.setSoftInputMode(i6);
                    break;
                }
                break;
        }
    }

    public /* synthetic */ l(int i5, ReactRoot reactRoot) {
        this.f31d = 1;
        this.f32e = i5;
        this.f33i = reactRoot;
    }
}
