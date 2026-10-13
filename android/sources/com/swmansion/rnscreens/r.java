package com.swmansion.rnscreens;

import android.view.View;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class r extends sg.b {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Object f6781b;

    public /* synthetic */ r(int i5, Object obj) {
        this.a = i5;
        this.f6781b = obj;
    }

    @Override // sg.b
    public final void b(View bottomSheet, float f2) {
        int reactHeight;
        switch (this.a) {
            case 0:
                Intrinsics.checkNotNullParameter(bottomSheet, "bottomSheet");
                ScreenFooter screenFooter = (ScreenFooter) this.f6781b;
                screenFooter.f6702v = Math.max(f2, 0.0f);
                if (!screenFooter.f6701i) {
                    int i5 = screenFooter.f6700e;
                    reactHeight = screenFooter.getReactHeight();
                    screenFooter.e(i5, reactHeight, screenFooter.i(screenFooter.f6702v), screenFooter.f6703w);
                    break;
                }
                break;
            case 1:
            case 2:
                break;
            case 3:
                Intrinsics.checkNotNullParameter(bottomSheet, "bottomSheet");
                hc.b bVar = (hc.b) this.f6781b;
                if (!bVar.f9624b) {
                    ((vm.a) bVar.f9625c).setAlpha((f2 < 0.0f ? 1.0f + f2 : 1.0f) * 0.3f);
                    break;
                }
                break;
            default:
                Intrinsics.checkNotNullParameter(bottomSheet, "bottomSheet");
                break;
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:10:0x0022, code lost:
    
        if (r8 != 6) goto L20;
     */
    /* JADX WARN: Code restructure failed: missing block: B:23:0x0029, code lost:
    
        if (r8 != 4) goto L20;
     */
    /* JADX WARN: Code restructure failed: missing block: B:24:0x002c, code lost:
    
        if (r8 == 3) goto L19;
     */
    @Override // sg.b
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void c(int i5, View bottomSheet) {
        int reactHeight;
        int i6 = this.a;
        Object obj = this.f6781b;
        switch (i6) {
            case 0:
                ScreenFooter screenFooter = (ScreenFooter) obj;
                Intrinsics.checkNotNullParameter(bottomSheet, "bottomSheet");
                if (i5 == 3 || i5 == 4 || i5 == 5 || i5 == 6) {
                    if (i5 == 3 || i5 == 4 || i5 == 6) {
                        int i10 = screenFooter.f6700e;
                        reactHeight = screenFooter.getReactHeight();
                        screenFooter.e(i10, reactHeight, screenFooter.h(i5), screenFooter.f6703w);
                    }
                    int i11 = ScreenFooter.E;
                    break;
                }
            case 1:
                if (i5 == 5) {
                    ((wm.m) obj).cancel();
                    break;
                }
                break;
            case 2:
                ((sg.f) obj).d(i5);
                break;
            case 3:
                Intrinsics.checkNotNullParameter(bottomSheet, "bottomSheet");
                break;
            default:
                Intrinsics.checkNotNullParameter(bottomSheet, "bottomSheet");
                eightbitlab.com.blurview.f fVar = (eightbitlab.com.blurview.f) obj;
                int i12 = fVar.a;
                int i13 = 1;
                if (i12 != 1) {
                    if (i12 != 2) {
                        if (i12 == 3) {
                            if (i5 != 3) {
                                if (i5 != 4) {
                                }
                                i13 = 0;
                            } else {
                                i13 = 2;
                            }
                        }
                        i13 = -1;
                    } else if (i5 != 3) {
                    }
                }
                if (i13 != -1 && i13 != fVar.f8126b) {
                    fVar.f8126b = i13;
                    ((com.facebook.react.runtime.r) fVar.f8128d).invoke(Integer.valueOf(i13));
                    break;
                }
                break;
        }
    }

    private final void d(View view, float f2) {
    }

    private final void e(View view, float f2) {
    }
}
