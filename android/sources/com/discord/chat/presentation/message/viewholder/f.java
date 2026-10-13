package com.discord.chat.presentation.message.viewholder;

import android.view.View;
import com.discord.chat.presentation.events.ChatEventHandler;
import com.discord.chat.presentation.message.view.EmbedView;
import com.discord.media_player.MediaSource;
import kotlin.jvm.functions.Function2;

/* loaded from: classes.dex */
public final /* synthetic */ class f implements View.OnClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4092d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f4093e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f4094i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ int f4095v;

    public /* synthetic */ f(Object obj, Object obj2, int i5, int i6) {
        this.f4092d = i6;
        this.f4093e = obj;
        this.f4094i = obj2;
        this.f4095v = i5;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        switch (this.f4092d) {
            case 0:
                ((ChatEventHandler) this.f4093e).mo507onTapInviteEmbedAFFcxXc((String) this.f4094i, this.f4095v, null, null);
                break;
            case 1:
                ((ChatEventHandler) this.f4093e).mo508onTapInviteEmbedAcceptntcYbpo((String) this.f4094i, this.f4095v);
                break;
            case 2:
                ((ChatEventHandler) this.f4093e).mo507onTapInviteEmbedAFFcxXc((String) this.f4094i, this.f4095v, null, null);
                break;
            case 3:
                ((ChatEventHandler) this.f4093e).mo508onTapInviteEmbedAcceptntcYbpo((String) this.f4094i, this.f4095v);
                break;
            default:
                EmbedView.setEmbed_Km7rQmo$lambda$11$lambda$10((Function2) this.f4093e, (MediaSource) this.f4094i, this.f4095v, view);
                break;
        }
    }
}
