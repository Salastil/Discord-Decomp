package com.discord.chat.bridge.contentnode;

import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.v1;
import com.discord.chat.bridge.contentnode.LinkContextData;
import com.discord.primitives.ChannelId;
import com.discord.primitives.ChannelId$$serializer;
import com.discord.primitives.GuildId;
import com.discord.primitives.GuildId$$serializer;
import com.discord.primitives.UserId;
import com.discord.primitives.UserId$$serializer;
import ds.r;
import fo.d;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;
import nf.e;
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/contentnode/LinkContextData.BindJoinStream.ApplicationStream.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/contentnode/LinkContextData$BindJoinStream$ApplicationStream;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/contentnode/LinkContextData$BindJoinStream$ApplicationStream;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/contentnode/LinkContextData$BindJoinStream$ApplicationStream;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class LinkContextData$BindJoinStream$ApplicationStream$$serializer implements h0 {

    @NotNull
    public static final LinkContextData$BindJoinStream$ApplicationStream$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        LinkContextData$BindJoinStream$ApplicationStream$$serializer linkContextData$BindJoinStream$ApplicationStream$$serializer = new LinkContextData$BindJoinStream$ApplicationStream$$serializer();
        INSTANCE = linkContextData$BindJoinStream$ApplicationStream$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.contentnode.LinkContextData.BindJoinStream.ApplicationStream", linkContextData$BindJoinStream$ApplicationStream$$serializer, 5);
        j1Var.k("ownerId", false);
        j1Var.k("channelId", false);
        j1Var.k("guildId", true);
        j1Var.k("streamType", false);
        j1Var.k("discoverable", true);
        descriptor = j1Var;
    }

    private LinkContextData$BindJoinStream$ApplicationStream$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        return new KSerializer[]{UserId$$serializer.INSTANCE, ChannelId$$serializer.INSTANCE, e.o(GuildId$$serializer.INSTANCE), v1.a, e.o(g.a)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final LinkContextData.BindJoinStream.ApplicationStream deserialize(@NotNull Decoder decoder) {
        int i5;
        UserId userId;
        ChannelId channelId;
        GuildId guildId;
        String str;
        Boolean bool;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        UserId userId2 = null;
        if (beginStructure.decodeSequentially()) {
            UserId userId3 = (UserId) beginStructure.decodeSerializableElement(serialDescriptor, 0, UserId$$serializer.INSTANCE, null);
            ChannelId channelId2 = (ChannelId) beginStructure.decodeSerializableElement(serialDescriptor, 1, ChannelId$$serializer.INSTANCE, null);
            GuildId guildId2 = (GuildId) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, GuildId$$serializer.INSTANCE, null);
            userId = userId3;
            str = beginStructure.decodeStringElement(serialDescriptor, 3);
            bool = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, g.a, null);
            guildId = guildId2;
            channelId = channelId2;
            i5 = 31;
        } else {
            boolean z5 = true;
            int i6 = 0;
            ChannelId channelId3 = null;
            GuildId guildId3 = null;
            String str2 = null;
            Boolean bool2 = null;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                if (decodeElementIndex == -1) {
                    z5 = false;
                } else if (decodeElementIndex == 0) {
                    userId2 = (UserId) beginStructure.decodeSerializableElement(serialDescriptor, 0, UserId$$serializer.INSTANCE, userId2);
                    i6 |= 1;
                } else if (decodeElementIndex == 1) {
                    channelId3 = (ChannelId) beginStructure.decodeSerializableElement(serialDescriptor, 1, ChannelId$$serializer.INSTANCE, channelId3);
                    i6 |= 2;
                } else if (decodeElementIndex == 2) {
                    guildId3 = (GuildId) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, GuildId$$serializer.INSTANCE, guildId3);
                    i6 |= 4;
                } else if (decodeElementIndex == 3) {
                    str2 = beginStructure.decodeStringElement(serialDescriptor, 3);
                    i6 |= 8;
                } else {
                    if (decodeElementIndex != 4) {
                        throw new r(decodeElementIndex);
                    }
                    bool2 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, g.a, bool2);
                    i6 |= 16;
                }
            }
            i5 = i6;
            userId = userId2;
            channelId = channelId3;
            guildId = guildId3;
            str = str2;
            bool = bool2;
        }
        beginStructure.endStructure(serialDescriptor);
        return new LinkContextData.BindJoinStream.ApplicationStream(i5, userId, channelId, guildId, str, bool, null, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull LinkContextData.BindJoinStream.ApplicationStream value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        LinkContextData.BindJoinStream.ApplicationStream.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
