package com.discord.tti_measurement_view;

import android.view.View;
import android.view.ViewGroup;
import android.view.ViewTreeObserver;
import com.google.firebase.messaging.r;
import io.sentry.android.core.internal.util.h;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements ViewTreeObserver.OnGlobalLayoutListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4392d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ View f4393e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f4394i;

    public /* synthetic */ a(Object obj, View view, int i5) {
        this.f4392d = i5;
        this.f4394i = obj;
        this.f4393e = view;
    }

    @Override // android.view.ViewTreeObserver.OnGlobalLayoutListener
    public final void onGlobalLayout() {
        switch (this.f4392d) {
            case 0:
                ((FirstDrawDoneListener) this.f4394i).lambda$onDraw$0(this.f4393e);
                break;
            case 1:
                h hVar = (h) this.f4394i;
                hVar.getClass();
                this.f4393e.getViewTreeObserver().removeOnDrawListener(hVar);
                break;
            default:
                ((r) this.f4394i).m((ViewGroup) this.f4393e);
                break;
        }
    }
}
