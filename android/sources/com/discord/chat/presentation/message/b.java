package com.discord.chat.presentation.message;

import android.view.View;
import com.discord.chat.bridge.connectionsroletag.ConnectionsRoleTag;
import com.discord.chat.bridge.embed.EmbedThumbnail;
import com.discord.chat.presentation.events.ChatEventHandler;
import com.discord.chat.presentation.message.view.EmbedView;
import com.discord.primitives.ChannelId;
import com.discord.primitives.GuildId;
import com.discord.primitives.UserId;
import kotlin.jvm.functions.Function3;

/* loaded from: classes.dex */
public final /* synthetic */ class b implements View.OnClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3905d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f3906e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f3907i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f3908v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ Object f3909w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ Object f3910x;

    public /* synthetic */ b(Object obj, Object obj2, Object obj3, Object obj4, Object obj5, int i5) {
        this.f3905d = i5;
        this.f3906e = obj;
        this.f3907i = obj2;
        this.f3908v = obj3;
        this.f3909w = obj4;
        this.f3910x = obj5;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        switch (this.f3905d) {
            case 0:
                ConnectionsRoleTagView.configureConnectionsRoleTag_uESh2Cg$lambda$0((ChatEventHandler) this.f3906e, (UserId) this.f3907i, (GuildId) this.f3908v, (ChannelId) this.f3909w, (ConnectionsRoleTag) this.f3910x, view);
                break;
            default:
                EmbedView.setThumbnail_xk5Fe9g$lambda$25$lambda$24$lambda$23((Function3) this.f3906e, (String) this.f3907i, (String) this.f3908v, (EmbedThumbnail) this.f3909w, (String) this.f3910x, view);
                break;
        }
    }
}
