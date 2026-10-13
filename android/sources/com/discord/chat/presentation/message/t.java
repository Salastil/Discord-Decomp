package com.discord.chat.presentation.message;

import android.view.View;
import com.discord.chat.bridge.Message;
import com.discord.chat.bridge.botuikit.ThumbnailDisplayComponent;
import com.discord.chat.presentation.message.messagepart.AudioAttachmentMessageAccessory;
import com.discord.chat.presentation.message.messagepart.ImageAttachmentMessageAccessory;
import com.discord.chat.presentation.message.messagepart.VideoAttachmentMessageAccessory;
import com.discord.chat.presentation.message.view.EmbedView;
import com.discord.chat.presentation.message.view.botuikit.ComponentContext;
import com.discord.chat.presentation.message.view.botuikit.components.ThumbnailDisplayComponentView;
import com.discord.chat.presentation.message.view.mosaic_recycler.AttachmentMediaMosaicAdapter;
import com.discord.chat.presentation.message.viewholder.AudioPlayerViewHolder;
import com.discord.emoji_picker.EmojiPickerRow;
import com.discord.emoji_picker.EmojiPickerRowView;
import com.discord.emoji_picker.EmojiPickerViewHolder;
import com.discord.sticker_picker.StickerPickerRow;
import com.discord.sticker_picker.StickerPickerRowView;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.functions.Function6;

/* loaded from: classes.dex */
public final /* synthetic */ class t implements View.OnLongClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3965d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f3966e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f3967i;

    public /* synthetic */ t(int i5, Object obj, Object obj2) {
        this.f3965d = i5;
        this.f3966e = obj;
        this.f3967i = obj2;
    }

    @Override // android.view.View.OnLongClickListener
    public final boolean onLongClick(View view) {
        boolean message$lambda$13$lambda$12;
        boolean authorOnClickListener$lambda$22$lambda$21;
        boolean provider$lambda$17$lambda$16$lambda$15;
        boolean configure$lambda$1;
        boolean bind$lambda$4$lambda$3$lambda$2;
        boolean configureRowEmojiViews$lambda$4$lambda$3;
        boolean _init_$lambda$4;
        boolean configureRowStickerViews$lambda$5$lambda$4;
        boolean onBindViewHolder$lambda$1;
        boolean onBindViewHolder$lambda$5;
        switch (this.f3965d) {
            case 0:
                message$lambda$13$lambda$12 = MessageView.setMessage$lambda$13$lambda$12((Function6) this.f3966e, (Message) this.f3967i, view);
                return message$lambda$13$lambda$12;
            case 1:
                authorOnClickListener$lambda$22$lambda$21 = EmbedView.setAuthorOnClickListener$lambda$22$lambda$21((Function1) this.f3966e, (EmbedView) this.f3967i, view);
                return authorOnClickListener$lambda$22$lambda$21;
            case 2:
                provider$lambda$17$lambda$16$lambda$15 = EmbedView.setProvider$lambda$17$lambda$16$lambda$15((Function1) this.f3966e, (CharSequence) this.f3967i, view);
                return provider$lambda$17$lambda$16$lambda$15;
            case 3:
                configure$lambda$1 = ThumbnailDisplayComponentView.configure$lambda$1((ComponentContext) this.f3966e, (ThumbnailDisplayComponent) this.f3967i, view);
                return configure$lambda$1;
            case 4:
                bind$lambda$4$lambda$3$lambda$2 = AudioPlayerViewHolder.bind$lambda$4$lambda$3$lambda$2((Function2) this.f3966e, (AudioAttachmentMessageAccessory) this.f3967i, view);
                return bind$lambda$4$lambda$3$lambda$2;
            case 5:
                configureRowEmojiViews$lambda$4$lambda$3 = EmojiPickerRowView.configureRowEmojiViews$lambda$4$lambda$3((EmojiPickerRowView) this.f3966e, (EmojiPickerRow.Emoji) this.f3967i, view);
                return configureRowEmojiViews$lambda$4$lambda$3;
            case 6:
                _init_$lambda$4 = EmojiPickerViewHolder.Emoji._init_$lambda$4((EmojiPickerViewHolder.Emoji) this.f3966e, (Function2) this.f3967i, view);
                return _init_$lambda$4;
            case 7:
                configureRowStickerViews$lambda$5$lambda$4 = StickerPickerRowView.configureRowStickerViews$lambda$5$lambda$4((StickerPickerRowView) this.f3966e, (StickerPickerRow.Sticker) this.f3967i, view);
                return configureRowStickerViews$lambda$5$lambda$4;
            case 8:
                onBindViewHolder$lambda$1 = AttachmentMediaMosaicAdapter.onBindViewHolder$lambda$1((AttachmentMediaMosaicAdapter) this.f3966e, (ImageAttachmentMessageAccessory) this.f3967i, view);
                return onBindViewHolder$lambda$1;
            default:
                onBindViewHolder$lambda$5 = AttachmentMediaMosaicAdapter.onBindViewHolder$lambda$5((AttachmentMediaMosaicAdapter) this.f3966e, (VideoAttachmentMessageAccessory) this.f3967i, view);
                return onBindViewHolder$lambda$5;
        }
    }
}
