package com.discord.notifications.api;

import bs.d;
import com.discord.jank_stats.JankRecordStore;
import cs.r;
import f7.a;
import fo.l;
import fo.m;
import java.util.List;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.collections.m0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.internal.SerializationConstructorMarker;
import kotlinx.serialization.json.JsonObject;
import org.jetbrains.annotations.NotNull;
import xr.e;

@e
@Metadata(d1 = {"\u0000b\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u001f\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0087\b\u0018\u0000 A2\u00020\u0001:\u0002@AB_\u0012\u000e\b\u0002\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0006\u0012\u000e\b\u0002\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\u00060\u0003\u0012\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\t\u0012\u000e\b\u0002\u0010\n\u001a\b\u0012\u0004\u0012\u00020\u000b0\u0003\u0012\u000e\b\u0002\u0010\f\u001a\b\u0012\u0004\u0012\u00020\r0\u0003¢\u0006\u0004\b\u000e\u0010\u000fBo\b\u0010\u0012\u0006\u0010\u0010\u001a\u00020\u0011\u0012\u000e\u0010\u0002\u001a\n\u0012\u0004\u0012\u00020\u0004\u0018\u00010\u0003\u0012\b\u0010\u0005\u001a\u0004\u0018\u00010\u0006\u0012\u000e\u0010\u0007\u001a\n\u0012\u0004\u0012\u00020\u0006\u0018\u00010\u0003\u0012\b\u0010\b\u001a\u0004\u0018\u00010\t\u0012\u000e\u0010\n\u001a\n\u0012\u0004\u0012\u00020\u000b\u0018\u00010\u0003\u0012\u000e\u0010\f\u001a\n\u0012\u0004\u0012\u00020\r\u0018\u00010\u0003\u0012\b\u0010\u0012\u001a\u0004\u0018\u00010\u0013¢\u0006\u0004\b\u000e\u0010\u0014J\u000f\u0010+\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003HÆ\u0003J\u000b\u0010,\u001a\u0004\u0018\u00010\u0006HÆ\u0003J\u000f\u0010-\u001a\b\u0012\u0004\u0012\u00020\u00060\u0003HÆ\u0003J\u000b\u0010.\u001a\u0004\u0018\u00010\tHÆ\u0003J\u000f\u0010/\u001a\b\u0012\u0004\u0012\u00020\u000b0\u0003HÆ\u0003J\u000f\u00100\u001a\b\u0012\u0004\u0012\u00020\r0\u0003HÆ\u0003Ja\u00101\u001a\u00020\u00002\u000e\b\u0002\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u00032\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u00062\u000e\b\u0002\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\u00060\u00032\n\b\u0002\u0010\b\u001a\u0004\u0018\u00010\t2\u000e\b\u0002\u0010\n\u001a\b\u0012\u0004\u0012\u00020\u000b0\u00032\u000e\b\u0002\u0010\f\u001a\b\u0012\u0004\u0012\u00020\r0\u0003HÆ\u0001J\u0013\u00102\u001a\u0002032\b\u00104\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u00105\u001a\u00020\u0011HÖ\u0001J\t\u00106\u001a\u000207HÖ\u0001J%\u00108\u001a\u0002092\u0006\u0010:\u001a\u00020\u00002\u0006\u0010;\u001a\u00020<2\u0006\u0010=\u001a\u00020>H\u0001¢\u0006\u0002\b?R\"\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u00038\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u0015\u0010\u0016\u001a\u0004\b\u0017\u0010\u0018R\u001e\u0010\u0005\u001a\u0004\u0018\u00010\u00068\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u0019\u0010\u0016\u001a\u0004\b\u001a\u0010\u001bR\"\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\u00060\u00038\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u001c\u0010\u0016\u001a\u0004\b\u001d\u0010\u0018R\u001e\u0010\b\u001a\u0004\u0018\u00010\t8\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b\u001e\u0010\u0016\u001a\u0004\b\u001f\u0010 R\"\u0010\n\u001a\b\u0012\u0004\u0012\u00020\u000b0\u00038\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b!\u0010\u0016\u001a\u0004\b\"\u0010\u0018R\"\u0010\f\u001a\b\u0012\u0004\u0012\u00020\r0\u00038\u0006X\u0087\u0004¢\u0006\u000e\n\u0000\u0012\u0004\b#\u0010\u0016\u001a\u0004\b$\u0010\u0018R\u0013\u0010%\u001a\u0004\u0018\u00010\u00048F¢\u0006\u0006\u001a\u0004\b&\u0010'R\u0013\u0010(\u001a\u0004\u0018\u00010\u000b8F¢\u0006\u0006\u001a\u0004\b)\u0010*¨\u0006B"}, d2 = {"Lcom/discord/notifications/api/NotificationMessage;", "", "stickerItems", "", "Lcom/discord/notifications/api/Sticker;", "author", "Lkotlinx/serialization/json/JsonObject;", "mentions", "poll", "Lcom/discord/notifications/api/Poll;", "embeds", "Lcom/discord/notifications/api/Embed;", "components", "Lcom/discord/notifications/api/Component;", "<init>", "(Ljava/util/List;Lkotlinx/serialization/json/JsonObject;Ljava/util/List;Lcom/discord/notifications/api/Poll;Ljava/util/List;Ljava/util/List;)V", "seen0", "", "serializationConstructorMarker", "Lkotlinx/serialization/internal/SerializationConstructorMarker;", "(ILjava/util/List;Lkotlinx/serialization/json/JsonObject;Ljava/util/List;Lcom/discord/notifications/api/Poll;Ljava/util/List;Ljava/util/List;Lkotlinx/serialization/internal/SerializationConstructorMarker;)V", "getStickerItems$annotations", "()V", "getStickerItems", "()Ljava/util/List;", "getAuthor$annotations", "getAuthor", "()Lkotlinx/serialization/json/JsonObject;", "getMentions$annotations", "getMentions", "getPoll$annotations", "getPoll", "()Lcom/discord/notifications/api/Poll;", "getEmbeds$annotations", "getEmbeds", "getComponents$annotations", "getComponents", "sticker", "getSticker", "()Lcom/discord/notifications/api/Sticker;", "embed", "getEmbed", "()Lcom/discord/notifications/api/Embed;", "component1", "component2", "component3", "component4", "component5", "component6", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "", "write$Self", "", "self", "output", "Lkotlinx/serialization/encoding/CompositeEncoder;", "serialDesc", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "write$Self$notification_api_release", "$serializer", "Companion", "notification_api_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class NotificationMessage {

    @NotNull
    private static final Lazy[] $childSerializers;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    private final JsonObject author;

    @NotNull
    private final List<Component> components;

    @NotNull
    private final List<Embed> embeds;

    @NotNull
    private final List<JsonObject> mentions;
    private final Poll poll;

    @NotNull
    private final List<Sticker> stickerItems;

    @Metadata(d1 = {"\u0000\u0016\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005¨\u0006\u0007"}, d2 = {"Lcom/discord/notifications/api/NotificationMessage$Companion;", "", "<init>", "()V", "serializer", "Lkotlinx/serialization/KSerializer;", "Lcom/discord/notifications/api/NotificationMessage;", "notification_api_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
        }

        @NotNull
        public final KSerializer serializer() {
            return NotificationMessage$$serializer.INSTANCE;
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }
    }

    static {
        m mVar = m.f8827e;
        $childSerializers = new Lazy[]{l.b(mVar, new a(0)), null, l.b(mVar, new a(1)), null, l.b(mVar, new a(2)), l.b(mVar, new a(3))};
    }

    public NotificationMessage() {
        this((List) null, (JsonObject) null, (List) null, (Poll) null, (List) null, (List) null, 63, (DefaultConstructorMarker) null);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final /* synthetic */ KSerializer _childSerializers$_anonymous_() {
        return new d(Sticker$$serializer.INSTANCE, 0);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final /* synthetic */ KSerializer _childSerializers$_anonymous_$0() {
        return new d(r.a, 0);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final /* synthetic */ KSerializer _childSerializers$_anonymous_$1() {
        return new d(Embed$$serializer.INSTANCE, 0);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final /* synthetic */ KSerializer _childSerializers$_anonymous_$2() {
        return new d(Component$$serializer.INSTANCE, 0);
    }

    public static /* synthetic */ NotificationMessage copy$default(NotificationMessage notificationMessage, List list, JsonObject jsonObject, List list2, Poll poll, List list3, List list4, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            list = notificationMessage.stickerItems;
        }
        if ((i5 & 2) != 0) {
            jsonObject = notificationMessage.author;
        }
        if ((i5 & 4) != 0) {
            list2 = notificationMessage.mentions;
        }
        if ((i5 & 8) != 0) {
            poll = notificationMessage.poll;
        }
        if ((i5 & 16) != 0) {
            list3 = notificationMessage.embeds;
        }
        if ((i5 & 32) != 0) {
            list4 = notificationMessage.components;
        }
        List list5 = list3;
        List list6 = list4;
        return notificationMessage.copy(list, jsonObject, list2, poll, list5, list6);
    }

    public static /* synthetic */ void getAuthor$annotations() {
    }

    public static /* synthetic */ void getComponents$annotations() {
    }

    public static /* synthetic */ void getEmbeds$annotations() {
    }

    public static /* synthetic */ void getMentions$annotations() {
    }

    public static /* synthetic */ void getPoll$annotations() {
    }

    public static /* synthetic */ void getStickerItems$annotations() {
    }

    public static final void write$Self$notification_api_release(NotificationMessage self, CompositeEncoder output, SerialDescriptor serialDesc) {
        Lazy[] lazyArr = $childSerializers;
        if (output.I(serialDesc, 0) || !Intrinsics.areEqual(self.stickerItems, m0.f13512d)) {
            output.g(serialDesc, 0, (KSerializer) lazyArr[0].getValue(), self.stickerItems);
        }
        if (output.I(serialDesc, 1) || self.author != null) {
            output.z(serialDesc, 1, r.a, self.author);
        }
        if (output.I(serialDesc, 2) || !Intrinsics.areEqual(self.mentions, m0.f13512d)) {
            output.g(serialDesc, 2, (KSerializer) lazyArr[2].getValue(), self.mentions);
        }
        if (output.I(serialDesc, 3) || self.poll != null) {
            output.z(serialDesc, 3, Poll$$serializer.INSTANCE, self.poll);
        }
        if (output.I(serialDesc, 4) || !Intrinsics.areEqual(self.embeds, m0.f13512d)) {
            output.g(serialDesc, 4, (KSerializer) lazyArr[4].getValue(), self.embeds);
        }
        if (!output.I(serialDesc, 5) && Intrinsics.areEqual(self.components, m0.f13512d)) {
            return;
        }
        output.g(serialDesc, 5, (KSerializer) lazyArr[5].getValue(), self.components);
    }

    @NotNull
    public final List<Sticker> component1() {
        return this.stickerItems;
    }

    /* renamed from: component2, reason: from getter */
    public final JsonObject getAuthor() {
        return this.author;
    }

    @NotNull
    public final List<JsonObject> component3() {
        return this.mentions;
    }

    /* renamed from: component4, reason: from getter */
    public final Poll getPoll() {
        return this.poll;
    }

    @NotNull
    public final List<Embed> component5() {
        return this.embeds;
    }

    @NotNull
    public final List<Component> component6() {
        return this.components;
    }

    @NotNull
    public final NotificationMessage copy(@NotNull List<Sticker> stickerItems, JsonObject author, @NotNull List<JsonObject> mentions, Poll poll, @NotNull List<Embed> embeds, @NotNull List<Component> components) {
        Intrinsics.checkNotNullParameter(stickerItems, "stickerItems");
        Intrinsics.checkNotNullParameter(mentions, "mentions");
        Intrinsics.checkNotNullParameter(embeds, "embeds");
        Intrinsics.checkNotNullParameter(components, "components");
        return new NotificationMessage(stickerItems, author, mentions, poll, embeds, components);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof NotificationMessage)) {
            return false;
        }
        NotificationMessage notificationMessage = (NotificationMessage) other;
        return Intrinsics.areEqual(this.stickerItems, notificationMessage.stickerItems) && Intrinsics.areEqual(this.author, notificationMessage.author) && Intrinsics.areEqual(this.mentions, notificationMessage.mentions) && Intrinsics.areEqual(this.poll, notificationMessage.poll) && Intrinsics.areEqual(this.embeds, notificationMessage.embeds) && Intrinsics.areEqual(this.components, notificationMessage.components);
    }

    public final JsonObject getAuthor() {
        return this.author;
    }

    @NotNull
    public final List<Component> getComponents() {
        return this.components;
    }

    public final Embed getEmbed() {
        return (Embed) CollectionsKt.firstOrNull(this.embeds);
    }

    @NotNull
    public final List<Embed> getEmbeds() {
        return this.embeds;
    }

    @NotNull
    public final List<JsonObject> getMentions() {
        return this.mentions;
    }

    public final Poll getPoll() {
        return this.poll;
    }

    public final Sticker getSticker() {
        return (Sticker) CollectionsKt.firstOrNull(this.stickerItems);
    }

    @NotNull
    public final List<Sticker> getStickerItems() {
        return this.stickerItems;
    }

    public int hashCode() {
        int hashCode = this.stickerItems.hashCode() * 31;
        JsonObject jsonObject = this.author;
        int e9 = a3.e.e(this.mentions, (hashCode + (jsonObject == null ? 0 : jsonObject.f13610d.hashCode())) * 31, 31);
        Poll poll = this.poll;
        return this.components.hashCode() + a3.e.e(this.embeds, (e9 + (poll != null ? poll.hashCode() : 0)) * 31, 31);
    }

    @NotNull
    public String toString() {
        return "NotificationMessage(stickerItems=" + this.stickerItems + ", author=" + this.author + ", mentions=" + this.mentions + ", poll=" + this.poll + ", embeds=" + this.embeds + ", components=" + this.components + ")";
    }

    public NotificationMessage(int i5, List list, JsonObject jsonObject, List list2, Poll poll, List list3, List list4, SerializationConstructorMarker serializationConstructorMarker) {
        this.stickerItems = (i5 & 1) == 0 ? m0.f13512d : list;
        if ((i5 & 2) == 0) {
            this.author = null;
        } else {
            this.author = jsonObject;
        }
        if ((i5 & 4) == 0) {
            this.mentions = m0.f13512d;
        } else {
            this.mentions = list2;
        }
        if ((i5 & 8) == 0) {
            this.poll = null;
        } else {
            this.poll = poll;
        }
        if ((i5 & 16) == 0) {
            this.embeds = m0.f13512d;
        } else {
            this.embeds = list3;
        }
        if ((i5 & 32) == 0) {
            this.components = m0.f13512d;
        } else {
            this.components = list4;
        }
    }

    public NotificationMessage(@NotNull List<Sticker> stickerItems, JsonObject jsonObject, @NotNull List<JsonObject> mentions, Poll poll, @NotNull List<Embed> embeds, @NotNull List<Component> components) {
        Intrinsics.checkNotNullParameter(stickerItems, "stickerItems");
        Intrinsics.checkNotNullParameter(mentions, "mentions");
        Intrinsics.checkNotNullParameter(embeds, "embeds");
        Intrinsics.checkNotNullParameter(components, "components");
        this.stickerItems = stickerItems;
        this.author = jsonObject;
        this.mentions = mentions;
        this.poll = poll;
        this.embeds = embeds;
        this.components = components;
    }

    public NotificationMessage(List list, JsonObject jsonObject, List list2, Poll poll, List list3, List list4, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this((i5 & 1) != 0 ? m0.f13512d : list, (i5 & 2) != 0 ? null : jsonObject, (i5 & 4) != 0 ? m0.f13512d : list2, (i5 & 8) != 0 ? null : poll, (i5 & 16) != 0 ? m0.f13512d : list3, (i5 & 32) != 0 ? m0.f13512d : list4);
    }
}
