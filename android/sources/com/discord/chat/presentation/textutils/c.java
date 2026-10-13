package com.discord.chat.presentation.textutils;

import android.view.MotionEvent;
import com.discord.chat.bridge.contentnode.CommandMentionContentNode;
import com.discord.chat.bridge.contentnode.EmojiContentNode;
import com.discord.chat.bridge.contentnode.GameMentionContentNode;
import com.discord.chat.bridge.contentnode.InlineCodeContentNode;
import com.discord.chat.bridge.contentnode.LinkContentNode;
import com.discord.chat.bridge.contentnode.SoundmojiContentNode;
import com.discord.crash_reporting.CrashReporting;
import com.discord.crash_reporting.system_logs.SystemLogUtils;
import com.discord.emoji.RenderableEmojiKt;
import com.discord.emoji.UnicodeEmojis;
import com.discord.emoji_picker.EmojiPickerCache;
import com.discord.emoji_picker.EmojiPickerRowView;
import com.discord.external_pip.ExternalPipManager;
import com.discord.fastest_list.android.FastestListLayoutManager;
import com.discord.fastest_list.android.view_holder.FastestListViewHolderView;
import com.discord.media.utils.ContentResolverMedia;
import com.discord.media.utils.Transcoder;
import com.discord.media_player.MediaPlayer;
import com.discord.media_player.reactevents.MediaPlayFinishedAnalytics;
import com.discord.mobile_voice_overlay.views.OverlayBubbleWrap;
import com.discord.mobile_voice_overlay.views.OverlayDialog;
import com.discord.mobile_voice_overlay.views.OverlayVoiceSelectorBubbleDialog;
import com.facebook.drawee.generic.GenericDraweeHierarchyBuilder;
import io.sentry.protocol.SentryStackFrame;
import kotlin.Result;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlinx.serialization.json.JsonBuilder;

/* loaded from: classes.dex */
public final /* synthetic */ class c implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4115d;

    public /* synthetic */ c(int i5) {
        this.f4115d = i5;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit spannable$lambda$7;
        Unit spannable$lambda$8;
        Unit spannable$lambda$9;
        Unit spannable$lambda$10;
        Unit spannable$lambda$11;
        Unit spannable$lambda$12;
        LinkStyle spannable$lambda$13;
        Unit spannable$lambda$15;
        Unit spannable$lambda$1;
        CharSequence errorStack$lambda$10;
        CharSequence hashString$lambda$7;
        Unit renderEmoji$lambda$2;
        Unit renderEmojiInto$lambda$0;
        Unit renderEmojiInto$lambda$4;
        Unit emojiJsonParser$lambda$0;
        Unit emojiJsonConfig$lambda$0;
        Unit onPressEmoji$lambda$0;
        Unit onLongPressEmoji$lambda$1;
        Unit enterPipMode$lambda$1;
        Exception _init_$lambda$0;
        Unit onViewTransitioning$lambda$0;
        CharSequence selection$lambda$2;
        CharSequence unsupportedImageMimeTypes$lambda$0;
        Unit convertCompress$lambda$0;
        Unit eventListener$lambda$0;
        Unit volumeListener$lambda$1;
        Unit analyticsListener$lambda$2;
        Unit unit;
        Unit onDialogClosed$lambda$0;
        Unit onTextChanged$lambda$1;
        switch (this.f4115d) {
            case 0:
                spannable$lambda$7 = TextUtilsKt.toSpannable$lambda$7((CommandMentionContentNode) obj);
                return spannable$lambda$7;
            case 1:
                spannable$lambda$8 = TextUtilsKt.toSpannable$lambda$8((CommandMentionContentNode) obj);
                return spannable$lambda$8;
            case 2:
                spannable$lambda$9 = TextUtilsKt.toSpannable$lambda$9((GameMentionContentNode) obj);
                return spannable$lambda$9;
            case 3:
                spannable$lambda$10 = TextUtilsKt.toSpannable$lambda$10((String) obj);
                return spannable$lambda$10;
            case 4:
                spannable$lambda$11 = TextUtilsKt.toSpannable$lambda$11((InlineCodeContentNode) obj);
                return spannable$lambda$11;
            case 5:
                spannable$lambda$12 = TextUtilsKt.toSpannable$lambda$12((EmojiContentNode) obj);
                return spannable$lambda$12;
            case 6:
                spannable$lambda$13 = TextUtilsKt.toSpannable$lambda$13((LinkContentNode) obj);
                return spannable$lambda$13;
            case 7:
                spannable$lambda$15 = TextUtilsKt.toSpannable$lambda$15((SoundmojiContentNode) obj);
                return spannable$lambda$15;
            case 8:
                spannable$lambda$1 = TextUtilsKt.toSpannable$lambda$1((LinkContentNode) obj);
                return spannable$lambda$1;
            case 9:
                errorStack$lambda$10 = CrashReporting.getErrorStack$lambda$10((SentryStackFrame) obj);
                return errorStack$lambda$10;
            case 10:
                hashString$lambda$7 = SystemLogUtils.hashString$lambda$7(((Byte) obj).byteValue());
                return hashString$lambda$7;
            case 11:
                renderEmoji$lambda$2 = RenderableEmojiKt.renderEmoji$lambda$2((GenericDraweeHierarchyBuilder) obj);
                return renderEmoji$lambda$2;
            case 12:
                renderEmojiInto$lambda$0 = RenderableEmojiKt.renderEmojiInto$lambda$0((GenericDraweeHierarchyBuilder) obj);
                return renderEmojiInto$lambda$0;
            case 13:
                renderEmojiInto$lambda$4 = RenderableEmojiKt.renderEmojiInto$lambda$4((GenericDraweeHierarchyBuilder) obj);
                return renderEmojiInto$lambda$4;
            case 14:
                emojiJsonParser$lambda$0 = UnicodeEmojis.emojiJsonParser$lambda$0((JsonBuilder) obj);
                return emojiJsonParser$lambda$0;
            case 15:
                emojiJsonConfig$lambda$0 = EmojiPickerCache.emojiJsonConfig$lambda$0((JsonBuilder) obj);
                return emojiJsonConfig$lambda$0;
            case 16:
                onPressEmoji$lambda$0 = EmojiPickerRowView.onPressEmoji$lambda$0((String) obj);
                return onPressEmoji$lambda$0;
            case 17:
                onLongPressEmoji$lambda$1 = EmojiPickerRowView.onLongPressEmoji$lambda$1((String) obj);
                return onLongPressEmoji$lambda$1;
            case 18:
                enterPipMode$lambda$1 = ExternalPipManager.enterPipMode$lambda$1((Result) obj);
                return enterPipMode$lambda$1;
            case 19:
                _init_$lambda$0 = FastestListLayoutManager._init_$lambda$0((Exception) obj);
                return _init_$lambda$0;
            case 20:
                onViewTransitioning$lambda$0 = FastestListViewHolderView.onViewTransitioning$lambda$0(((Boolean) obj).booleanValue());
                return onViewTransitioning$lambda$0;
            case 21:
                selection$lambda$2 = ContentResolverMedia.QueryType.getSelection$lambda$2((String) obj);
                return selection$lambda$2;
            case 22:
                unsupportedImageMimeTypes$lambda$0 = ContentResolverMedia.QueryType.Companion.getUnsupportedImageMimeTypes$lambda$0((String) obj);
                return unsupportedImageMimeTypes$lambda$0;
            case 23:
                convertCompress$lambda$0 = Transcoder.convertCompress$lambda$0(((Float) obj).floatValue());
                return convertCompress$lambda$0;
            case 24:
                eventListener$lambda$0 = MediaPlayer.eventListener$lambda$0((MediaPlayer.Event) obj);
                return eventListener$lambda$0;
            case 25:
                volumeListener$lambda$1 = MediaPlayer.volumeListener$lambda$1(((Float) obj).floatValue());
                return volumeListener$lambda$1;
            case 26:
                analyticsListener$lambda$2 = MediaPlayer.analyticsListener$lambda$2((MediaPlayFinishedAnalytics) obj);
                return analyticsListener$lambda$2;
            case 27:
                unit = OverlayBubbleWrap.touchDispatchSideEffectHandler$lambda$1((MotionEvent) obj);
                return unit;
            case 28:
                onDialogClosed$lambda$0 = OverlayDialog.onDialogClosed$lambda$0((OverlayDialog) obj);
                return onDialogClosed$lambda$0;
            default:
                onTextChanged$lambda$1 = OverlayVoiceSelectorBubbleDialog.onTextChanged$lambda$1((String) obj);
                return onTextChanged$lambda$1;
        }
    }
}
