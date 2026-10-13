package com.discord.chat.presentation.message;

import android.app.AlertDialog;
import android.view.View;
import android.widget.EditText;
import com.discord.chat.bridge.Message;
import com.discord.chat.bridge.botuikit.ContentInventoryEntry;
import com.discord.chat.bridge.botuikit.ThumbnailDisplayComponent;
import com.discord.chat.bridge.embed.Embed;
import com.discord.chat.bridge.executedcommand.ExecutedCommand;
import com.discord.chat.bridge.roleicons.RoleIcon;
import com.discord.chat.bridge.sticker.Sticker;
import com.discord.chat.presentation.events.ChatEventHandler;
import com.discord.chat.presentation.message.messagepart.ImageAttachmentMessageAccessory;
import com.discord.chat.presentation.message.messagepart.VideoAttachmentMessageAccessory;
import com.discord.chat.presentation.message.view.EmbedView;
import com.discord.chat.presentation.message.view.botuikit.ComponentContext;
import com.discord.chat.presentation.message.view.botuikit.components.ContentInventoryComponentViewKt;
import com.discord.chat.presentation.message.view.botuikit.components.ThumbnailDisplayComponentView;
import com.discord.chat.presentation.message.view.mosaic_recycler.AttachmentMediaMosaicAdapter;
import com.discord.chat.presentation.message.viewholder.mosaicitem.attachments.MosaicItemMessageAttachmentImageViewHolder;
import com.discord.chat.presentation.message.viewholder.mosaicitem.attachments.MosaicItemMessageAttachmentVideoViewHolder;
import com.discord.chat.presentation.stickers.WelcomeStickerView;
import com.discord.emoji.RenderableEmoji;
import com.facebook.react.devsupport.ChangeBundleLocationDialog;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.functions.Function3;

/* loaded from: classes.dex */
public final /* synthetic */ class d implements View.OnClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3913d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f3914e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f3915i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f3916v;

    public /* synthetic */ d(ComponentContext componentContext, ContentInventoryEntry contentInventoryEntry, String str) {
        this.f3913d = 4;
        this.f3914e = componentContext;
        this.f3916v = contentInventoryEntry;
        this.f3915i = str;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        switch (this.f3913d) {
            case 0:
                ((ChatEventHandler) this.f3914e).onTapGameIcon((String) this.f3915i, (String) this.f3916v);
                break;
            case 1:
                MessageViewReplyPreview.configureExecutedCommand_dB0_bEw$lambda$12((ChatEventHandler) this.f3914e, (String) this.f3915i, (ExecutedCommand) this.f3916v, view);
                break;
            case 2:
                RoleIconView.configureRoleIcon$lambda$3$lambda$2((ChatEventHandler) this.f3914e, (RoleIcon) this.f3915i, (RenderableEmoji) this.f3916v, view);
                break;
            case 3:
                EmbedView.setEmbed_Km7rQmo$lambda$8$lambda$7((Function3) this.f3914e, (String) this.f3915i, (Embed) this.f3916v, view);
                break;
            case 4:
                ContentInventoryComponentViewKt.applyClickable$lambda$0((ComponentContext) this.f3914e, (ContentInventoryEntry) this.f3916v, (String) this.f3915i, view);
                break;
            case 5:
                ThumbnailDisplayComponentView.configure$lambda$0((ComponentContext) this.f3914e, (ThumbnailDisplayComponentView) this.f3915i, (ThumbnailDisplayComponent) this.f3916v, view);
                break;
            case 6:
                ChangeBundleLocationDialog.show$lambda$2((ChangeBundleLocationDialog.ChangeBundleLocationDialogListener) this.f3914e, (EditText) this.f3915i, (AlertDialog) this.f3916v, view);
                break;
            case 7:
                AttachmentMediaMosaicAdapter.onBindViewHolder$lambda$0((AttachmentMediaMosaicAdapter) this.f3914e, (ImageAttachmentMessageAccessory) this.f3915i, (MosaicItemMessageAttachmentImageViewHolder) this.f3916v, view);
                break;
            case 8:
                AttachmentMediaMosaicAdapter.onBindViewHolder$lambda$4((AttachmentMediaMosaicAdapter) this.f3914e, (VideoAttachmentMessageAccessory) this.f3915i, (MosaicItemMessageAttachmentVideoViewHolder) this.f3916v, view);
                break;
            default:
                WelcomeStickerView.setSticker$lambda$1((Function2) this.f3914e, (Sticker) this.f3915i, (Message) this.f3916v, view);
                break;
        }
    }

    public /* synthetic */ d(Object obj, Object obj2, Object obj3, int i5) {
        this.f3913d = i5;
        this.f3914e = obj;
        this.f3915i = obj2;
        this.f3916v = obj3;
    }
}
