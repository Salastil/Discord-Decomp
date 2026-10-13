package com.discord.notifications.api;

import bs.c;
import com.discord.primitives.ChannelId;
import java.util.ArrayList;
import java.util.List;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.StringsKt;
import kotlin.text.StringsKt__StringsKt;
import kotlin.text.x;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;
import nf.e;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u00008\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0002\bÆ\u0002\u0018\u00002\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00030\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0004\u0010\u0005J\u0016\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\u00030\u00022\u0006\u0010\u0007\u001a\u00020\bH\u0016J\u001e\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\f2\f\u0010\r\u001a\b\u0012\u0004\u0012\u00020\u00030\u0002H\u0016J\u0010\u0010\u0012\u001a\u00020\u00132\u0006\u0010\u0014\u001a\u00020\u0013H\u0002R\u0014\u0010\u000e\u001a\u00020\u000f8VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\u0010\u0010\u0011¨\u0006\u0015"}, d2 = {"Lcom/discord/notifications/api/ChannelListSerializer;", "Lkotlinx/serialization/KSerializer;", "", "Lcom/discord/primitives/ChannelId;", "<init>", "()V", "deserialize", "decoder", "Lkotlinx/serialization/encoding/Decoder;", "serialize", "", "encoder", "Lkotlinx/serialization/encoding/Encoder;", "value", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "deserializeForCalls", "", "channelIds", "notification_api_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nNotificationDataDeserializer.kt\nKotlin\n*S Kotlin\n*F\n+ 1 NotificationDataDeserializer.kt\ncom/discord/notifications/api/ChannelListSerializer\n+ 2 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,61:1\n1617#2,9:62\n1869#2:71\n1870#2:74\n1626#2:75\n1#3:72\n1#3:73\n*S KotlinDebug\n*F\n+ 1 NotificationDataDeserializer.kt\ncom/discord/notifications/api/ChannelListSerializer\n*L\n16#1:62,9\n16#1:71\n16#1:74\n16#1:75\n16#1:73\n*E\n"})
/* loaded from: classes.dex */
public final class ChannelListSerializer implements KSerializer {

    @NotNull
    public static final ChannelListSerializer INSTANCE = new ChannelListSerializer();

    private ChannelListSerializer() {
    }

    private final String deserializeForCalls(String channelIds) {
        return (x.o(channelIds, "[", false) && x.h(channelIds, "]", false)) ? StringsKt.O(StringsKt.N(channelIds, "["), "]") : channelIds;
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public SerialDescriptor getDescriptor() {
        return (c) e.a(ChannelId.INSTANCE.serializer()).f3172c;
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public List<ChannelId> deserialize(@NotNull Decoder decoder) {
        List<String> split$default;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        split$default = StringsKt__StringsKt.split$default(deserializeForCalls(decoder.decodeString()), new String[]{","}, false, 0, 6, null);
        ArrayList arrayList = new ArrayList();
        for (String str : split$default) {
            if (x.o(str, "\"", false) && x.h(str, "\"", false)) {
                str = StringsKt.N(StringsKt.O(str, "\""), "\"");
            }
            Long a0 = StringsKt.a0(str);
            ChannelId m1163boximpl = a0 != null ? ChannelId.m1163boximpl(ChannelId.m1164constructorimpl(a0.longValue())) : null;
            if (m1163boximpl != null) {
                arrayList.add(m1163boximpl);
            }
        }
        return arrayList;
    }

    @Override // kotlinx.serialization.KSerializer
    public void serialize(@NotNull Encoder encoder, @NotNull List<ChannelId> value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        throw new UnsupportedOperationException();
    }
}
