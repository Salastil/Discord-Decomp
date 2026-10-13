package com.discord.chat.presentation.message.viewholder;

import android.view.View;
import com.discord.chat.bridge.sticker.Sticker;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class h implements View.OnClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4099d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Function1 f4100e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Sticker f4101i;

    public /* synthetic */ h(Function1 function1, Sticker sticker, int i5) {
        this.f4099d = i5;
        this.f4100e = function1;
        this.f4101i = sticker;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        switch (this.f4099d) {
            case 0:
                this.f4100e.invoke(this.f4101i);
                break;
            case 1:
                this.f4100e.invoke(this.f4101i);
                break;
            case 2:
                this.f4100e.invoke(this.f4101i);
                break;
            default:
                this.f4100e.invoke(this.f4101i);
                break;
        }
    }
}
