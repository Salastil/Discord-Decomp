package com.discord.chat.presentation.message.view.botuikit.react;

import a3.e;
import android.content.res.Resources;
import android.view.View;
import bs.c0;
import com.discord.chat.bridge.botuikit.Component;
import com.discord.chat.bridge.botuikit.ComponentSerializer;
import com.discord.chat.bridge.botuikit.TextDisplayComponent;
import com.discord.chat.bridge.contentnode.CommandMentionContentNode;
import com.discord.chat.bridge.contentnode.EmojiContentNode;
import com.discord.chat.bridge.contentnode.InlineCodeContentNode;
import com.discord.chat.bridge.contentnode.LinkContentNode;
import com.discord.chat.bridge.contentnode.SoundmojiContentNode;
import com.discord.chat.presentation.message.i;
import com.discord.chat.presentation.message.messagepart.MessageMargins;
import com.discord.chat.presentation.message.view.b;
import com.discord.chat.presentation.message.view.botuikit.ComponentContext;
import com.discord.chat.presentation.message.view.botuikit.MarkdownTextRenderEventHandlers;
import com.discord.chat.presentation.message.view.botuikit.MarkdownTextRenderOptions;
import com.discord.chat.presentation.message.view.botuikit.WidthInfo;
import com.discord.chat.presentation.message.view.botuikit.components.TextDisplayComponentView;
import com.discord.chat.presentation.message.view.botuikit.react.TextDisplayComponentViewManager;
import com.discord.chat.presentation.message.view.botuikit.react.deserialization.ComponentDeserializerKt;
import com.discord.chat.presentation.message.view.c;
import com.discord.chat.presentation.message.view.polls.a;
import com.discord.chat.reactevents.LongPressAttachmentLinkData;
import com.discord.chat.reactevents.LongPressLinkData;
import com.discord.chat.reactevents.TapAttachmentLinkData;
import com.discord.chat.reactevents.TapEmojiData;
import com.discord.chat.reactevents.TapInlineCodeEvent;
import com.discord.chat.reactevents.TapLinkData;
import com.discord.chat.reactevents.TapMentionData;
import com.discord.chat.reactevents.TapTimestampEvent;
import com.discord.misc.utilities.measure.ViewMeasureExtensionsKt;
import com.discord.react.utilities.SelfMeasuringSimpleViewManager;
import com.discord.reactevents.ReactEvents;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.module.annotations.ReactModule;
import com.facebook.react.uimanager.ReactStylesDiffMap;
import com.facebook.react.uimanager.StateWrapper;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.annotations.ReactProp;
import cs.h;
import cs.p;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Set;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.serialization.json.JsonElement;
import kotlinx.serialization.json.JsonObject;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000^\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010%\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0007\u0018\u0000 #2\b\u0012\u0004\u0012\u00020\u00020\u0001:\u0001#B\u0007¢\u0006\u0004\b\u0003\u0010\u0004J\u0014\u0010\n\u001a\u000e\u0012\u0004\u0012\u00020\u000b\u0012\u0004\u0012\u00020\f0\bH\u0016J\b\u0010\r\u001a\u00020\u000bH\u0016J\u0010\u0010\u000e\u001a\u00020\u00022\u0006\u0010\u000f\u001a\u00020\u0010H\u0014J\u0010\u0010\u0011\u001a\u00020\u00122\u0006\u0010\u0013\u001a\u00020\u0002H\u0016J$\u0010\u0014\u001a\u00020\u00122\u0006\u0010\u0013\u001a\u00020\u00022\b\u0010\u0015\u001a\u0004\u0018\u00010\u00162\b\u0010\u0017\u001a\u0004\u0018\u00010\u0018H\u0016J\u0018\u0010\u0019\u001a\u00020\u00122\u0006\u0010\u0013\u001a\u00020\u00022\u0006\u0010\u001a\u001a\u00020\u000bH\u0007J\u0018\u0010\u001b\u001a\u00020\u00122\u0006\u0010\u0013\u001a\u00020\u00022\u0006\u0010\u001c\u001a\u00020\u001dH\u0007J\u0010\u0010\u001e\u001a\u00020\u00122\u0006\u0010\u0013\u001a\u00020\u0002H\u0002J\u0018\u0010\u001f\u001a\u00020 2\u0006\u0010\u0013\u001a\u00020\u00022\u0006\u0010!\u001a\u00020\"H\u0002R\u000e\u0010\u0005\u001a\u00020\u0006X\u0082\u0004¢\u0006\u0002\n\u0000R\u001a\u0010\u0007\u001a\u000e\u0012\u0004\u0012\u00020\u0002\u0012\u0004\u0012\u00020\t0\bX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006$"}, d2 = {"Lcom/discord/chat/presentation/message/view/botuikit/react/TextDisplayComponentViewManager;", "Lcom/discord/react/utilities/SelfMeasuringSimpleViewManager;", "Lcom/discord/chat/presentation/message/view/botuikit/components/TextDisplayComponentView;", "<init>", "()V", "reactEvents", "Lcom/discord/reactevents/ReactEvents;", "viewToDataMapping", "", "Lcom/discord/chat/presentation/message/view/botuikit/react/PartialData;", "getExportedCustomDirectEventTypeConstants", "", "", "getName", "createViewInstance", "reactContext", "Lcom/facebook/react/uimanager/ThemedReactContext;", "onDropViewInstance", "", "view", "updateState", "props", "Lcom/facebook/react/uimanager/ReactStylesDiffMap;", "stateWrapper", "Lcom/facebook/react/uimanager/StateWrapper;", "setModel", "model", "setMarkdownTextRenderOptions", "options", "Lcom/facebook/react/bridge/ReadableMap;", "tryConfigure", "createTextDisplayComponentContext", "Lcom/discord/chat/presentation/message/view/botuikit/ComponentContext;", "data", "Lcom/discord/chat/presentation/message/view/botuikit/react/Data;", "Companion", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@ReactModule(name = TextDisplayComponentViewManager.NAME)
@SourceDebugExtension({"SMAP\nTextDisplayComponentViewManager.kt\nKotlin\n*S Kotlin\n*F\n+ 1 TextDisplayComponentViewManager.kt\ncom/discord/chat/presentation/message/view/botuikit/react/TextDisplayComponentViewManager\n+ 2 Maps.kt\nkotlin/collections/MapsKt__MapsKt\n+ 3 ComponentDeserializer.kt\ncom/discord/chat/presentation/message/view/botuikit/react/deserialization/ComponentDeserializerKt\n*L\n1#1,220:1\n384#2,7:221\n384#2,7:246\n14#3,18:228\n*S KotlinDebug\n*F\n+ 1 TextDisplayComponentViewManager.kt\ncom/discord/chat/presentation/message/view/botuikit/react/TextDisplayComponentViewManager\n*L\n93#1:221,7\n101#1:246,7\n94#1:228,18\n*E\n"})
/* loaded from: classes.dex */
public final class TextDisplayComponentViewManager extends SelfMeasuringSimpleViewManager<TextDisplayComponentView> {

    @NotNull
    public static final String NAME = "TextDisplayComponentView";

    @NotNull
    private final ReactEvents reactEvents = new ReactEvents(new Pair("onTapLink", Reflection.getOrCreateKotlinClass(TapLinkData.class)), new Pair("onLongPressLink", Reflection.getOrCreateKotlinClass(LongPressLinkData.class)), new Pair("onTapAttachmentLink", Reflection.getOrCreateKotlinClass(TapAttachmentLinkData.class)), new Pair("onLongPressAttachmentLink", Reflection.getOrCreateKotlinClass(LongPressAttachmentLinkData.class)), new Pair("onTapMention", Reflection.getOrCreateKotlinClass(TapMentionData.class)), new Pair("onTapTimestamp", Reflection.getOrCreateKotlinClass(TapTimestampEvent.class)), new Pair("onTapInlineCode", Reflection.getOrCreateKotlinClass(TapInlineCodeEvent.class)), new Pair("onTapEmoji", Reflection.getOrCreateKotlinClass(TapEmojiData.class)));

    @NotNull
    private final Map<TextDisplayComponentView, PartialData> viewToDataMapping = new LinkedHashMap();

    private final ComponentContext createTextDisplayComponentContext(final TextDisplayComponentView view, Data data) {
        Resources resources = view.getResources();
        Intrinsics.checkNotNullExpressionValue(resources, "getResources(...)");
        MessageMargins messageMargins = new MessageMargins(resources);
        String containerId = data.getMarkdownTextRenderOptions().getContainerId();
        ComponentContextDefaults componentContextDefaults = ComponentContextDefaults.INSTANCE;
        final int i5 = 0;
        final int i6 = 4;
        final int i10 = 5;
        final int i11 = 1;
        final int i12 = 2;
        final int i13 = 3;
        return new ComponentContext(messageMargins, containerId, componentContextDefaults.getGENERAL_HANDLERS(), data.getMarkdownTextRenderOptions(), new MarkdownTextRenderEventHandlers(new Function1(this) { // from class: f6.a

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ TextDisplayComponentViewManager f8378e;

            {
                this.f8378e = this;
            }

            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                Unit createTextDisplayComponentContext$lambda$2;
                Unit createTextDisplayComponentContext$lambda$12;
                Unit createTextDisplayComponentContext$lambda$13;
                Unit createTextDisplayComponentContext$lambda$14;
                Unit createTextDisplayComponentContext$lambda$3;
                Unit createTextDisplayComponentContext$lambda$6;
                switch (i5) {
                    case 0:
                        createTextDisplayComponentContext$lambda$2 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$2(this.f8378e, view, (LinkContentNode) obj);
                        return createTextDisplayComponentContext$lambda$2;
                    case 1:
                        createTextDisplayComponentContext$lambda$12 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$12(this.f8378e, view, (String) obj);
                        return createTextDisplayComponentContext$lambda$12;
                    case 2:
                        createTextDisplayComponentContext$lambda$13 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$13(this.f8378e, view, (InlineCodeContentNode) obj);
                        return createTextDisplayComponentContext$lambda$13;
                    case 3:
                        createTextDisplayComponentContext$lambda$14 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$14(this.f8378e, view, (EmojiContentNode) obj);
                        return createTextDisplayComponentContext$lambda$14;
                    case 4:
                        createTextDisplayComponentContext$lambda$3 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$3(this.f8378e, view, (LinkContentNode) obj);
                        return createTextDisplayComponentContext$lambda$3;
                    default:
                        createTextDisplayComponentContext$lambda$6 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$6(this.f8378e, view, (String) obj);
                        return createTextDisplayComponentContext$lambda$6;
                }
            }
        }, new Function1(this) { // from class: f6.a

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ TextDisplayComponentViewManager f8378e;

            {
                this.f8378e = this;
            }

            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                Unit createTextDisplayComponentContext$lambda$2;
                Unit createTextDisplayComponentContext$lambda$12;
                Unit createTextDisplayComponentContext$lambda$13;
                Unit createTextDisplayComponentContext$lambda$14;
                Unit createTextDisplayComponentContext$lambda$3;
                Unit createTextDisplayComponentContext$lambda$6;
                switch (i6) {
                    case 0:
                        createTextDisplayComponentContext$lambda$2 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$2(this.f8378e, view, (LinkContentNode) obj);
                        return createTextDisplayComponentContext$lambda$2;
                    case 1:
                        createTextDisplayComponentContext$lambda$12 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$12(this.f8378e, view, (String) obj);
                        return createTextDisplayComponentContext$lambda$12;
                    case 2:
                        createTextDisplayComponentContext$lambda$13 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$13(this.f8378e, view, (InlineCodeContentNode) obj);
                        return createTextDisplayComponentContext$lambda$13;
                    case 3:
                        createTextDisplayComponentContext$lambda$14 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$14(this.f8378e, view, (EmojiContentNode) obj);
                        return createTextDisplayComponentContext$lambda$14;
                    case 4:
                        createTextDisplayComponentContext$lambda$3 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$3(this.f8378e, view, (LinkContentNode) obj);
                        return createTextDisplayComponentContext$lambda$3;
                    default:
                        createTextDisplayComponentContext$lambda$6 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$6(this.f8378e, view, (String) obj);
                        return createTextDisplayComponentContext$lambda$6;
                }
            }
        }, new b(5), new c(5), new Function1(this) { // from class: f6.a

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ TextDisplayComponentViewManager f8378e;

            {
                this.f8378e = this;
            }

            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                Unit createTextDisplayComponentContext$lambda$2;
                Unit createTextDisplayComponentContext$lambda$12;
                Unit createTextDisplayComponentContext$lambda$13;
                Unit createTextDisplayComponentContext$lambda$14;
                Unit createTextDisplayComponentContext$lambda$3;
                Unit createTextDisplayComponentContext$lambda$6;
                switch (i10) {
                    case 0:
                        createTextDisplayComponentContext$lambda$2 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$2(this.f8378e, view, (LinkContentNode) obj);
                        return createTextDisplayComponentContext$lambda$2;
                    case 1:
                        createTextDisplayComponentContext$lambda$12 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$12(this.f8378e, view, (String) obj);
                        return createTextDisplayComponentContext$lambda$12;
                    case 2:
                        createTextDisplayComponentContext$lambda$13 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$13(this.f8378e, view, (InlineCodeContentNode) obj);
                        return createTextDisplayComponentContext$lambda$13;
                    case 3:
                        createTextDisplayComponentContext$lambda$14 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$14(this.f8378e, view, (EmojiContentNode) obj);
                        return createTextDisplayComponentContext$lambda$14;
                    case 4:
                        createTextDisplayComponentContext$lambda$3 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$3(this.f8378e, view, (LinkContentNode) obj);
                        return createTextDisplayComponentContext$lambda$3;
                    default:
                        createTextDisplayComponentContext$lambda$6 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$6(this.f8378e, view, (String) obj);
                        return createTextDisplayComponentContext$lambda$6;
                }
            }
        }, new i(6, this, view), new a(1, this, view), new p(20), new p(21), null, new c0(27, this, view), new Function1(this) { // from class: f6.a

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ TextDisplayComponentViewManager f8378e;

            {
                this.f8378e = this;
            }

            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                Unit createTextDisplayComponentContext$lambda$2;
                Unit createTextDisplayComponentContext$lambda$12;
                Unit createTextDisplayComponentContext$lambda$13;
                Unit createTextDisplayComponentContext$lambda$14;
                Unit createTextDisplayComponentContext$lambda$3;
                Unit createTextDisplayComponentContext$lambda$6;
                switch (i11) {
                    case 0:
                        createTextDisplayComponentContext$lambda$2 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$2(this.f8378e, view, (LinkContentNode) obj);
                        return createTextDisplayComponentContext$lambda$2;
                    case 1:
                        createTextDisplayComponentContext$lambda$12 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$12(this.f8378e, view, (String) obj);
                        return createTextDisplayComponentContext$lambda$12;
                    case 2:
                        createTextDisplayComponentContext$lambda$13 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$13(this.f8378e, view, (InlineCodeContentNode) obj);
                        return createTextDisplayComponentContext$lambda$13;
                    case 3:
                        createTextDisplayComponentContext$lambda$14 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$14(this.f8378e, view, (EmojiContentNode) obj);
                        return createTextDisplayComponentContext$lambda$14;
                    case 4:
                        createTextDisplayComponentContext$lambda$3 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$3(this.f8378e, view, (LinkContentNode) obj);
                        return createTextDisplayComponentContext$lambda$3;
                    default:
                        createTextDisplayComponentContext$lambda$6 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$6(this.f8378e, view, (String) obj);
                        return createTextDisplayComponentContext$lambda$6;
                }
            }
        }, new Function1(this) { // from class: f6.a

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ TextDisplayComponentViewManager f8378e;

            {
                this.f8378e = this;
            }

            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                Unit createTextDisplayComponentContext$lambda$2;
                Unit createTextDisplayComponentContext$lambda$12;
                Unit createTextDisplayComponentContext$lambda$13;
                Unit createTextDisplayComponentContext$lambda$14;
                Unit createTextDisplayComponentContext$lambda$3;
                Unit createTextDisplayComponentContext$lambda$6;
                switch (i12) {
                    case 0:
                        createTextDisplayComponentContext$lambda$2 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$2(this.f8378e, view, (LinkContentNode) obj);
                        return createTextDisplayComponentContext$lambda$2;
                    case 1:
                        createTextDisplayComponentContext$lambda$12 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$12(this.f8378e, view, (String) obj);
                        return createTextDisplayComponentContext$lambda$12;
                    case 2:
                        createTextDisplayComponentContext$lambda$13 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$13(this.f8378e, view, (InlineCodeContentNode) obj);
                        return createTextDisplayComponentContext$lambda$13;
                    case 3:
                        createTextDisplayComponentContext$lambda$14 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$14(this.f8378e, view, (EmojiContentNode) obj);
                        return createTextDisplayComponentContext$lambda$14;
                    case 4:
                        createTextDisplayComponentContext$lambda$3 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$3(this.f8378e, view, (LinkContentNode) obj);
                        return createTextDisplayComponentContext$lambda$3;
                    default:
                        createTextDisplayComponentContext$lambda$6 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$6(this.f8378e, view, (String) obj);
                        return createTextDisplayComponentContext$lambda$6;
                }
            }
        }, new Function1(this) { // from class: f6.a

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ TextDisplayComponentViewManager f8378e;

            {
                this.f8378e = this;
            }

            @Override // kotlin.jvm.functions.Function1
            public final Object invoke(Object obj) {
                Unit createTextDisplayComponentContext$lambda$2;
                Unit createTextDisplayComponentContext$lambda$12;
                Unit createTextDisplayComponentContext$lambda$13;
                Unit createTextDisplayComponentContext$lambda$14;
                Unit createTextDisplayComponentContext$lambda$3;
                Unit createTextDisplayComponentContext$lambda$6;
                switch (i13) {
                    case 0:
                        createTextDisplayComponentContext$lambda$2 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$2(this.f8378e, view, (LinkContentNode) obj);
                        return createTextDisplayComponentContext$lambda$2;
                    case 1:
                        createTextDisplayComponentContext$lambda$12 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$12(this.f8378e, view, (String) obj);
                        return createTextDisplayComponentContext$lambda$12;
                    case 2:
                        createTextDisplayComponentContext$lambda$13 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$13(this.f8378e, view, (InlineCodeContentNode) obj);
                        return createTextDisplayComponentContext$lambda$13;
                    case 3:
                        createTextDisplayComponentContext$lambda$14 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$14(this.f8378e, view, (EmojiContentNode) obj);
                        return createTextDisplayComponentContext$lambda$14;
                    case 4:
                        createTextDisplayComponentContext$lambda$3 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$3(this.f8378e, view, (LinkContentNode) obj);
                        return createTextDisplayComponentContext$lambda$3;
                    default:
                        createTextDisplayComponentContext$lambda$6 = TextDisplayComponentViewManager.createTextDisplayComponentContext$lambda$6(this.f8378e, view, (String) obj);
                        return createTextDisplayComponentContext$lambda$6;
                }
            }
        }, new p(22), IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING, null), componentContextDefaults.getMEDIA_HANDLERS(), componentContextDefaults.getCOMPONENT_HANDLERS(), new WidthInfo(0, 0, 0, 4, null), false, false, false, true);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit createTextDisplayComponentContext$lambda$10(CommandMentionContentNode it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit createTextDisplayComponentContext$lambda$11(TextDisplayComponentViewManager textDisplayComponentViewManager, TextDisplayComponentView textDisplayComponentView) {
        textDisplayComponentViewManager.tryConfigure(textDisplayComponentView);
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit createTextDisplayComponentContext$lambda$12(TextDisplayComponentViewManager textDisplayComponentViewManager, TextDisplayComponentView textDisplayComponentView, String timestamp) {
        Intrinsics.checkNotNullParameter(timestamp, "timestamp");
        textDisplayComponentViewManager.reactEvents.emitEvent(textDisplayComponentView, new TapTimestampEvent(timestamp));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit createTextDisplayComponentContext$lambda$13(TextDisplayComponentViewManager textDisplayComponentViewManager, TextDisplayComponentView textDisplayComponentView, InlineCodeContentNode node) {
        Intrinsics.checkNotNullParameter(node, "node");
        textDisplayComponentViewManager.reactEvents.emitEvent(textDisplayComponentView, new TapInlineCodeEvent(node));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit createTextDisplayComponentContext$lambda$14(TextDisplayComponentViewManager textDisplayComponentViewManager, TextDisplayComponentView textDisplayComponentView, EmojiContentNode emojiNode) {
        Intrinsics.checkNotNullParameter(emojiNode, "emojiNode");
        textDisplayComponentViewManager.reactEvents.emitEvent(textDisplayComponentView, new TapEmojiData(emojiNode));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit createTextDisplayComponentContext$lambda$15(SoundmojiContentNode it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Multi-variable type inference failed */
    public static final Unit createTextDisplayComponentContext$lambda$2(TextDisplayComponentViewManager textDisplayComponentViewManager, TextDisplayComponentView textDisplayComponentView, LinkContentNode node) {
        Intrinsics.checkNotNullParameter(node, "node");
        textDisplayComponentViewManager.reactEvents.emitEvent(textDisplayComponentView, new TapLinkData(null, node, 0 == true ? 1 : 0));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit createTextDisplayComponentContext$lambda$3(TextDisplayComponentViewManager textDisplayComponentViewManager, TextDisplayComponentView textDisplayComponentView, LinkContentNode node) {
        Intrinsics.checkNotNullParameter(node, "node");
        textDisplayComponentViewManager.reactEvents.emitEvent(textDisplayComponentView, new LongPressLinkData(node.getUrl()));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit createTextDisplayComponentContext$lambda$4(String str, String str2, String str3) {
        Intrinsics.checkNotNullParameter(str, "<unused var>");
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit createTextDisplayComponentContext$lambda$5(String str, String str2, String str3, String str4) {
        Intrinsics.checkNotNullParameter(str, "<unused var>");
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit createTextDisplayComponentContext$lambda$6(TextDisplayComponentViewManager textDisplayComponentViewManager, TextDisplayComponentView textDisplayComponentView, String attachmentUrl) {
        Intrinsics.checkNotNullParameter(attachmentUrl, "attachmentUrl");
        textDisplayComponentViewManager.reactEvents.emitEvent(textDisplayComponentView, new TapAttachmentLinkData(attachmentUrl));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit createTextDisplayComponentContext$lambda$7(TextDisplayComponentViewManager textDisplayComponentViewManager, TextDisplayComponentView textDisplayComponentView, String attachmentUrl, String attachmentName) {
        Intrinsics.checkNotNullParameter(attachmentUrl, "attachmentUrl");
        Intrinsics.checkNotNullParameter(attachmentName, "attachmentName");
        textDisplayComponentViewManager.reactEvents.emitEvent(textDisplayComponentView, new LongPressAttachmentLinkData(attachmentUrl, attachmentName));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit createTextDisplayComponentContext$lambda$8(TextDisplayComponentViewManager textDisplayComponentViewManager, TextDisplayComponentView textDisplayComponentView, String str, String channelId, String str2, String str3, String str4, String str5) {
        Intrinsics.checkNotNullParameter(channelId, "channelId");
        textDisplayComponentViewManager.reactEvents.emitEvent(textDisplayComponentView, new TapMentionData(str, channelId, str2, str3, str4, str5));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit createTextDisplayComponentContext$lambda$9(CommandMentionContentNode it) {
        Intrinsics.checkNotNullParameter(it, "it");
        return Unit.a;
    }

    private final void tryConfigure(TextDisplayComponentView view) {
        Data data;
        PartialData partialData = this.viewToDataMapping.get(view);
        if (partialData == null || (data = partialData.toData()) == null) {
            return;
        }
        view.configure(data.getComponent(), createTextDisplayComponentContext(view, data));
        ViewMeasureExtensionsKt.measureAndLayout(view);
    }

    @Override // com.facebook.react.uimanager.BaseViewManager, com.facebook.react.uimanager.ViewManager
    @NotNull
    public Map<String, Object> getExportedCustomDirectEventTypeConstants() {
        return this.reactEvents.exportEventConstants();
    }

    @Override // com.facebook.react.uimanager.ViewManager, com.facebook.react.bridge.NativeModule
    @NotNull
    public String getName() {
        return NAME;
    }

    /* JADX WARN: Multi-variable type inference failed */
    @ReactProp(name = "markdownTextRenderOptions")
    public final void setMarkdownTextRenderOptions(@NotNull TextDisplayComponentView view, @NotNull ReadableMap options) {
        Intrinsics.checkNotNullParameter(view, "view");
        Intrinsics.checkNotNullParameter(options, "options");
        Map<TextDisplayComponentView, PartialData> map = this.viewToDataMapping;
        PartialData partialData = map.get(view);
        if (partialData == null) {
            partialData = new PartialData(null, 0 == true ? 1 : 0, 3, 0 == true ? 1 : 0);
            map.put(view, partialData);
        }
        PartialData partialData2 = partialData;
        String string = options.getString("containerId");
        if (string == null) {
            string = "";
        }
        partialData2.setMarkdownTextRenderOptions(new MarkdownTextRenderOptions(string, options.getBoolean("shouldAnimateEmoji"), options.getBoolean("shouldShowLinkDecorations"), options.getBoolean("shouldForceRevealSpoilers"), options.getBoolean("shouldShowRoleDot"), options.getBoolean("shouldShowRoleOnName")));
        tryConfigure(view);
    }

    /* JADX WARN: Multi-variable type inference failed */
    @ReactProp(name = "model")
    public final void setModel(@NotNull TextDisplayComponentView view, @NotNull String model) {
        String e9;
        String str;
        Intrinsics.checkNotNullParameter(view, "view");
        Intrinsics.checkNotNullParameter(model, "model");
        Map<TextDisplayComponentView, PartialData> map = this.viewToDataMapping;
        PartialData partialData = map.get(view);
        if (partialData == null) {
            partialData = new PartialData(null, 0 == true ? 1 : 0, 3, 0 == true ? 1 : 0);
            map.put(view, partialData);
        }
        PartialData partialData2 = partialData;
        try {
            Component component = (Component) ComponentDeserializerKt.getJson().b(ComponentSerializer.INSTANCE, model);
            if (component instanceof TextDisplayComponent) {
                partialData2.setComponent((TextDisplayComponent) component);
                tryConfigure(view);
                return;
            }
            throw new IllegalStateException(("Expected " + Reflection.getOrCreateKotlinClass(TextDisplayComponent.class).getSimpleName() + " but got " + Reflection.getOrCreateKotlinClass(component.getClass()).getSimpleName()).toString());
        } catch (Exception e10) {
            try {
                JsonObject j = h.j(ComponentDeserializerKt.getJson().d(model));
                Set keySet = j.f13610d.keySet();
                JsonElement jsonElement = (JsonElement) j.get("type");
                if (jsonElement == null || (str = h.k(jsonElement).a()) == null) {
                    str = "undefined";
                }
                e9 = "keys: " + keySet + ", type: " + str;
            } catch (Exception unused) {
                e9 = s4.h.e(model.length(), "unparseable JSON of ", " chars");
            }
            StringBuilder t5 = e.t("Error while deserializing ", Reflection.getOrCreateKotlinClass(TextDisplayComponent.class).getSimpleName(), ": ", e10.getMessage(), ".\nReceived ");
            t5.append(e9);
            throw new IllegalStateException(t5.toString().toString());
        }
    }

    @Override // com.facebook.react.uimanager.ViewManager
    public /* bridge */ /* synthetic */ Object updateState(View view, ReactStylesDiffMap reactStylesDiffMap, StateWrapper stateWrapper) {
        updateState((TextDisplayComponentView) view, reactStylesDiffMap, stateWrapper);
        return Unit.a;
    }

    @Override // com.facebook.react.uimanager.ViewManager
    @NotNull
    public TextDisplayComponentView createViewInstance(@NotNull ThemedReactContext reactContext) {
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        return new TextDisplayComponentView(reactContext);
    }

    @Override // com.discord.react.utilities.SelfMeasuringSimpleViewManager, com.facebook.react.uimanager.BaseViewManager, com.facebook.react.uimanager.ViewManager
    public void onDropViewInstance(@NotNull TextDisplayComponentView view) {
        Intrinsics.checkNotNullParameter(view, "view");
        this.viewToDataMapping.remove(view);
        super.onDropViewInstance((TextDisplayComponentViewManager) view);
    }

    public void updateState(@NotNull TextDisplayComponentView view, ReactStylesDiffMap props, StateWrapper stateWrapper) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.getReactSelfMeasurer().applyState(stateWrapper);
    }
}
