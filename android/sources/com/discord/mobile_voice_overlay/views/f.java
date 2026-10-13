package com.discord.mobile_voice_overlay.views;

import android.view.View;

/* loaded from: classes.dex */
public final /* synthetic */ class f implements View.OnClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4306d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f4307e;

    public /* synthetic */ f(int i5, Object obj) {
        this.f4306d = i5;
        this.f4307e = obj;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        switch (this.f4306d) {
            case 0:
                ResultViewHolder._init_$lambda$1((ResultViewHolder) this.f4307e, view);
                break;
            case 1:
                ((OverlayDialog) this.f4307e).closeDialog();
                break;
            default:
                ((OverlayVoiceSelectorBubbleDialog) this.f4307e).closeDialog();
                break;
        }
    }
}
