package cs;

import android.graphics.PointF;
import android.view.View;
import com.discord.chat.bridge.contentnode.CommandMentionContentNode;
import com.discord.chat.bridge.contentnode.EmojiContentNode;
import com.discord.chat.bridge.contentnode.GameMentionContentNode;
import com.discord.chat.bridge.contentnode.InlineCodeContentNode;
import com.discord.chat.bridge.contentnode.LinkContentNode;
import com.discord.chat.bridge.contentnode.SoundmojiContentNode;
import com.discord.chat.presentation.message.view.botuikit.MarkdownTextRenderEventHandlers;
import com.discord.chat.presentation.message.view.botuikit.react.ComponentContextDefaults;
import com.discord.chat.presentation.message.view.botuikit.react.TextDisplayComponentViewManager;
import com.discord.chat.presentation.message.view.botuikit.react.deserialization.ComponentDeserializerKt;
import com.discord.chat.presentation.message.view.media.ViewAttachedListener;
import com.discord.mobile_voice_overlay.utils.OverlayViewProvider;
import com.discord.mobile_voice_overlay.views.OverlayView;
import com.discord.notifications.api.DirectReplyMessage;
import com.discord.notifications.api.NotificationMessageSerializer;
import com.discord.primitives.UserId;
import com.discord.sticker_picker.StickerPickerRowView;
import ds.f0;
import java.util.Map;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.sequences.Sequence;
import kotlinx.serialization.json.JsonBuilder;
import kotlinx.serialization.json.JsonElement;

/* loaded from: classes3.dex */
public final /* synthetic */ class p implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f7334d;

    public /* synthetic */ p(int i5) {
        this.f7334d = i5;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit _init_$lambda$0;
        Unit removeViewFromOverlay$lambda$0;
        Unit onPressSticker$lambda$0;
        Unit onLongPressSticker$lambda$1;
        Unit MEDIA_HANDLERS$lambda$19;
        Unit MEDIA_HANDLERS$lambda$20;
        Unit COMPONENT_HANDLERS$lambda$21;
        Unit COMPONENT_HANDLERS$lambda$22;
        Unit COMPONENT_HANDLERS$lambda$23;
        Unit COMPONENT_HANDLERS$lambda$25;
        Unit MARKDOWN_HANDLERS$lambda$2;
        Unit MARKDOWN_HANDLERS$lambda$3;
        Unit MARKDOWN_HANDLERS$lambda$10;
        Unit MARKDOWN_HANDLERS$lambda$6;
        Unit MARKDOWN_HANDLERS$lambda$9;
        Unit MARKDOWN_HANDLERS$lambda$12;
        Unit MARKDOWN_HANDLERS$lambda$13;
        Unit MARKDOWN_HANDLERS$lambda$14;
        Unit MARKDOWN_HANDLERS$lambda$15;
        Unit createTextDisplayComponentContext$lambda$9;
        Unit createTextDisplayComponentContext$lambda$10;
        Unit createTextDisplayComponentContext$lambda$15;
        Unit json$lambda$0;
        Unit json$lambda$02;
        Unit json$lambda$03;
        Unit _init_$lambda$02;
        switch (this.f7334d) {
            case 0:
                Map.Entry entry = (Map.Entry) obj;
                Intrinsics.checkNotNullParameter(entry, "<destruct>");
                String str = (String) entry.getKey();
                JsonElement jsonElement = (JsonElement) entry.getValue();
                StringBuilder sb2 = new StringBuilder();
                f0.a(str, sb2);
                sb2.append(':');
                sb2.append(jsonElement);
                String sb3 = sb2.toString();
                Intrinsics.checkNotNullExpressionValue(sb3, "toString(...)");
                return sb3;
            case 1:
                _init_$lambda$0 = MarkdownTextRenderEventHandlers._init_$lambda$0((GameMentionContentNode) obj);
                return _init_$lambda$0;
            case 2:
                removeViewFromOverlay$lambda$0 = OverlayViewProvider.removeViewFromOverlay$lambda$0((OverlayView) obj);
                return removeViewFromOverlay$lambda$0;
            case 3:
                onPressSticker$lambda$0 = StickerPickerRowView.onPressSticker$lambda$0((String) obj);
                return onPressSticker$lambda$0;
            case 4:
                onLongPressSticker$lambda$1 = StickerPickerRowView.onLongPressSticker$lambda$1((String) obj);
                return onLongPressSticker$lambda$1;
            case 5:
                MEDIA_HANDLERS$lambda$19 = ComponentContextDefaults.MEDIA_HANDLERS$lambda$19((String) obj);
                return MEDIA_HANDLERS$lambda$19;
            case 6:
                MEDIA_HANDLERS$lambda$20 = ComponentContextDefaults.MEDIA_HANDLERS$lambda$20(((Boolean) obj).booleanValue());
                return MEDIA_HANDLERS$lambda$20;
            case 7:
                COMPONENT_HANDLERS$lambda$21 = ComponentContextDefaults.COMPONENT_HANDLERS$lambda$21((String) obj);
                return COMPONENT_HANDLERS$lambda$21;
            case 8:
                COMPONENT_HANDLERS$lambda$22 = ComponentContextDefaults.COMPONENT_HANDLERS$lambda$22((String) obj);
                return COMPONENT_HANDLERS$lambda$22;
            case 9:
                COMPONENT_HANDLERS$lambda$23 = ComponentContextDefaults.COMPONENT_HANDLERS$lambda$23((String) obj);
                return COMPONENT_HANDLERS$lambda$23;
            case 10:
                COMPONENT_HANDLERS$lambda$25 = ComponentContextDefaults.COMPONENT_HANDLERS$lambda$25((UserId) obj);
                return COMPONENT_HANDLERS$lambda$25;
            case 11:
                MARKDOWN_HANDLERS$lambda$2 = ComponentContextDefaults.MARKDOWN_HANDLERS$lambda$2((LinkContentNode) obj);
                return MARKDOWN_HANDLERS$lambda$2;
            case 12:
                MARKDOWN_HANDLERS$lambda$3 = ComponentContextDefaults.MARKDOWN_HANDLERS$lambda$3((LinkContentNode) obj);
                return MARKDOWN_HANDLERS$lambda$3;
            case 13:
                MARKDOWN_HANDLERS$lambda$10 = ComponentContextDefaults.MARKDOWN_HANDLERS$lambda$10((CommandMentionContentNode) obj);
                return MARKDOWN_HANDLERS$lambda$10;
            case 14:
                MARKDOWN_HANDLERS$lambda$6 = ComponentContextDefaults.MARKDOWN_HANDLERS$lambda$6((String) obj);
                return MARKDOWN_HANDLERS$lambda$6;
            case 15:
                MARKDOWN_HANDLERS$lambda$9 = ComponentContextDefaults.MARKDOWN_HANDLERS$lambda$9((CommandMentionContentNode) obj);
                return MARKDOWN_HANDLERS$lambda$9;
            case 16:
                MARKDOWN_HANDLERS$lambda$12 = ComponentContextDefaults.MARKDOWN_HANDLERS$lambda$12((String) obj);
                return MARKDOWN_HANDLERS$lambda$12;
            case 17:
                MARKDOWN_HANDLERS$lambda$13 = ComponentContextDefaults.MARKDOWN_HANDLERS$lambda$13((InlineCodeContentNode) obj);
                return MARKDOWN_HANDLERS$lambda$13;
            case 18:
                MARKDOWN_HANDLERS$lambda$14 = ComponentContextDefaults.MARKDOWN_HANDLERS$lambda$14((EmojiContentNode) obj);
                return MARKDOWN_HANDLERS$lambda$14;
            case 19:
                MARKDOWN_HANDLERS$lambda$15 = ComponentContextDefaults.MARKDOWN_HANDLERS$lambda$15((SoundmojiContentNode) obj);
                return MARKDOWN_HANDLERS$lambda$15;
            case 20:
                createTextDisplayComponentContext$lambda$9 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$9((CommandMentionContentNode) obj);
                return createTextDisplayComponentContext$lambda$9;
            case 21:
                createTextDisplayComponentContext$lambda$10 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$10((CommandMentionContentNode) obj);
                return createTextDisplayComponentContext$lambda$10;
            case 22:
                createTextDisplayComponentContext$lambda$15 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$15((SoundmojiContentNode) obj);
                return createTextDisplayComponentContext$lambda$15;
            case 23:
                json$lambda$0 = DirectReplyMessage.json$lambda$0((JsonBuilder) obj);
                return json$lambda$0;
            case 24:
                json$lambda$02 = NotificationMessageSerializer.json$lambda$0((JsonBuilder) obj);
                return json$lambda$02;
            case 25:
                json$lambda$03 = ComponentDeserializerKt.json$lambda$0((JsonBuilder) obj);
                return json$lambda$03;
            case 26:
                _init_$lambda$02 = ViewAttachedListener._init_$lambda$0(((Boolean) obj).booleanValue());
                return _init_$lambda$02;
            case 27:
                View it = (View) obj;
                Intrinsics.checkNotNullParameter(it, "it");
                return Integer.valueOf(it.getId());
            case 28:
                jm.f it2 = (jm.f) obj;
                Intrinsics.checkNotNullParameter(it2, "it");
                PointF pointF = jm.g.f12895p;
                return Boolean.valueOf(qa.s.v(it2.f12878h) && !it2.M);
            default:
                Sequence it3 = (Sequence) obj;
                Intrinsics.checkNotNullParameter(it3, "it");
                return it3.iterator();
        }
    }
}
