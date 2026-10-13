package com.discord.chat.input.views;

import android.view.View;
import com.swmansion.rnscreens.r0;
import k4.k;

/* loaded from: classes.dex */
public final /* synthetic */ class b implements View.OnFocusChangeListener {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Object f3870b;

    public /* synthetic */ b(int i5, Object obj) {
        this.a = i5;
        this.f3870b = obj;
    }

    @Override // android.view.View.OnFocusChangeListener
    public final void onFocusChange(View view, boolean z5) {
        switch (this.a) {
            case 0:
                ChatInputRootView._init_$lambda$3((ChatInputRootView) this.f3870b, view, z5);
                break;
            case 1:
                r0 r0Var = (r0) this.f3870b;
                int i5 = r0Var.J;
                r0Var.k(z5 ? new k(i5, r0Var.getId(), 11) : new k(i5, r0Var.getId(), 9));
                break;
            case 2:
                oh.c cVar = (oh.c) this.f3870b;
                cVar.s(cVar.t());
                break;
            default:
                oh.k kVar = (oh.k) this.f3870b;
                kVar.f15906l = z5;
                kVar.p();
                if (!z5) {
                    kVar.s(false);
                    kVar.f15907m = false;
                    break;
                }
                break;
        }
    }
}
