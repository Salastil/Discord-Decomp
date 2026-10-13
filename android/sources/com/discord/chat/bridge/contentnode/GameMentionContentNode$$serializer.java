package com.discord.chat.bridge.contentnode;

import bs.h0;
import bs.h1;
import bs.j1;
import bs.v1;
import com.discord.primitives.ChannelId;
import com.discord.primitives.ChannelId$$serializer;
import ds.r;
import fo.d;
import java.util.List;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.DeserializationStrategy;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;
import nf.e;
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/contentnode/GameMentionContentNode.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/contentnode/GameMentionContentNode;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/contentnode/GameMentionContentNode;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/contentnode/GameMentionContentNode;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class GameMentionContentNode$$serializer implements h0 {

    @NotNull
    public static final GameMentionContentNode$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        GameMentionContentNode$$serializer gameMentionContentNode$$serializer = new GameMentionContentNode$$serializer();
        INSTANCE = gameMentionContentNode$$serializer;
        j1 j1Var = new j1("gameMention", gameMentionContentNode$$serializer, 5);
        j1Var.k("channelId", false);
        j1Var.k("icon", true);
        j1Var.k("gameId", false);
        j1Var.k("displayName", true);
        j1Var.k("content", true);
        descriptor = j1Var;
    }

    private GameMentionContentNode$$serializer() {
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        Lazy[] lazyArr;
        lazyArr = GameMentionContentNode.$childSerializers;
        v1 v1Var = v1.a;
        return new KSerializer[]{ChannelId$$serializer.INSTANCE, e.o(v1Var), v1Var, e.o(v1Var), lazyArr[4].getValue()};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final GameMentionContentNode deserialize(@NotNull Decoder decoder) {
        Lazy[] lazyArr;
        int i5;
        ChannelId channelId;
        String str;
        String str2;
        String str3;
        List list;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        lazyArr = GameMentionContentNode.$childSerializers;
        ChannelId channelId2 = null;
        if (beginStructure.decodeSequentially()) {
            ChannelId channelId3 = (ChannelId) beginStructure.decodeSerializableElement(serialDescriptor, 0, ChannelId$$serializer.INSTANCE, null);
            v1 v1Var = v1.a;
            String str4 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 1, v1Var, null);
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 2);
            String str5 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, v1Var, null);
            list = (List) beginStructure.decodeSerializableElement(serialDescriptor, 4, (DeserializationStrategy) lazyArr[4].getValue(), null);
            channelId = channelId3;
            str3 = str5;
            str2 = decodeStringElement;
            i5 = 31;
            str = str4;
        } else {
            boolean z5 = true;
            int i6 = 0;
            String str6 = null;
            String str7 = null;
            String str8 = null;
            List list2 = null;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                if (decodeElementIndex == -1) {
                    z5 = false;
                } else if (decodeElementIndex == 0) {
                    channelId2 = (ChannelId) beginStructure.decodeSerializableElement(serialDescriptor, 0, ChannelId$$serializer.INSTANCE, channelId2);
                    i6 |= 1;
                } else if (decodeElementIndex == 1) {
                    str6 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 1, v1.a, str6);
                    i6 |= 2;
                } else if (decodeElementIndex == 2) {
                    str7 = beginStructure.decodeStringElement(serialDescriptor, 2);
                    i6 |= 4;
                } else if (decodeElementIndex == 3) {
                    str8 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, v1.a, str8);
                    i6 |= 8;
                } else {
                    if (decodeElementIndex != 4) {
                        throw new r(decodeElementIndex);
                    }
                    list2 = (List) beginStructure.decodeSerializableElement(serialDescriptor, 4, (DeserializationStrategy) lazyArr[4].getValue(), list2);
                    i6 |= 16;
                }
            }
            i5 = i6;
            channelId = channelId2;
            str = str6;
            str2 = str7;
            str3 = str8;
            list = list2;
        }
        beginStructure.endStructure(serialDescriptor);
        return new GameMentionContentNode(i5, channelId, str, str2, str3, list, null, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull GameMentionContentNode value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        GameMentionContentNode.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
