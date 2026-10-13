package com.discord.chat.presentation.message.view;

import android.view.View;
import com.discord.chat.bridge.botuikit.MediaGalleryDisplayComponent;
import com.discord.chat.bridge.botuikit.MediaGalleryItem;
import com.discord.chat.bridge.codedlinks.AppMessageEmbedImpl;
import com.discord.chat.presentation.events.ChatEventHandler;
import com.discord.chat.presentation.message.view.botuikit.components.media_gallery.MediaGalleryDisplayComponentAdapter;
import com.discord.chat.presentation.message.viewholder.mosaicitem.attachments.MosaicItemMessageAttachmentImageViewHolder;
import com.discord.chat.presentation.message.viewholder.mosaicitem.attachments.MosaicItemMessageAttachmentVideoViewHolder;
import com.facebook.drawee.span.DraweeSpanStringBuilder;
import kotlin.jvm.functions.Function3;

/* loaded from: classes.dex */
public final /* synthetic */ class g implements View.OnClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3986d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f3987e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f3988i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f3989v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ Object f3990w;

    public /* synthetic */ g(int i5, Object obj, Object obj2, Object obj3, Object obj4) {
        this.f3986d = i5;
        this.f3988i = obj;
        this.f3989v = obj2;
        this.f3990w = obj3;
        this.f3987e = obj4;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        switch (this.f3986d) {
            case 0:
                ((AppMessageEmbedView) this.f3988i).handleTap((ChatEventHandler) this.f3989v, (AppMessageEmbedImpl) this.f3990w, (String) this.f3987e);
                break;
            case 1:
                EmbedView.setEmbed_Km7rQmo$lambda$5$lambda$4((Function3) this.f3988i, (String) this.f3987e, (String) this.f3989v, (DraweeSpanStringBuilder) this.f3990w, view);
                break;
            case 2:
                MediaGalleryDisplayComponentAdapter.onBindViewHolder$lambda$0((MediaGalleryDisplayComponentAdapter) this.f3988i, (MediaGalleryDisplayComponent) this.f3989v, (MediaGalleryItem) this.f3990w, (MosaicItemMessageAttachmentImageViewHolder) this.f3987e, view);
                break;
            default:
                MediaGalleryDisplayComponentAdapter.onBindViewHolder$lambda$5((MediaGalleryDisplayComponentAdapter) this.f3988i, (MediaGalleryDisplayComponent) this.f3989v, (MediaGalleryItem) this.f3990w, (MosaicItemMessageAttachmentVideoViewHolder) this.f3987e, view);
                break;
        }
    }

    public /* synthetic */ g(Function3 function3, String str, String str2, DraweeSpanStringBuilder draweeSpanStringBuilder) {
        this.f3986d = 1;
        this.f3988i = function3;
        this.f3987e = str;
        this.f3989v = str2;
        this.f3990w = draweeSpanStringBuilder;
    }
}
