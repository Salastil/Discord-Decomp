package com.discord.chat.presentation.message.viewholder;

import android.view.View;
import kotlin.jvm.functions.Function2;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements View.OnClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4077d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Function2 f4078e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ String f4079i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ long f4080v;

    public /* synthetic */ a(Function2 function2, String str, long j, int i5) {
        this.f4077d = i5;
        this.f4078e = function2;
        this.f4079i = str;
        this.f4080v = j;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        switch (this.f4077d) {
            case 0:
                AutoModerationNotificationEmbedViewHolder.bind$lambda$0(this.f4078e, this.f4079i, this.f4080v, view);
                break;
            case 1:
                AutoModerationNotificationEmbedViewHolder.bind$lambda$1(this.f4078e, this.f4079i, this.f4080v, view);
                break;
            case 2:
                FlaggedMessageActionBarViewHolder.bind$lambda$0(this.f4078e, this.f4079i, this.f4080v, view);
                break;
            default:
                FlaggedMessageActionBarViewHolder.bind$lambda$1(this.f4078e, this.f4079i, this.f4080v, view);
                break;
        }
    }
}
