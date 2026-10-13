package com.discord.chat.bridge.botuikit;

import bs.h0;
import bs.h1;
import bs.j1;
import bs.t0;
import bs.v1;
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
import kotlinx.serialization.internal.SerializationConstructorMarker;
import nf.e;
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/botuikit/CheckpointEmoji.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/botuikit/CheckpointEmoji;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/botuikit/CheckpointEmoji;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/botuikit/CheckpointEmoji;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class CheckpointEmoji$$serializer implements h0 {

    @NotNull
    public static final CheckpointEmoji$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        CheckpointEmoji$$serializer checkpointEmoji$$serializer = new CheckpointEmoji$$serializer();
        INSTANCE = checkpointEmoji$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.botuikit.CheckpointEmoji", checkpointEmoji$$serializer, 3);
        j1Var.k("emojiId", true);
        j1Var.k("emojiName", false);
        j1Var.k("emojiSurrogateName", true);
        descriptor = j1Var;
    }

    private CheckpointEmoji$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        KSerializer o6 = e.o(t0.a);
        v1 v1Var = v1.a;
        return new KSerializer[]{o6, v1Var, e.o(v1Var)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final CheckpointEmoji deserialize(@NotNull Decoder decoder) {
        int i5;
        Long l6;
        String str;
        String str2;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        Long l7 = null;
        if (beginStructure.decodeSequentially()) {
            Long l10 = (Long) beginStructure.decodeNullableSerializableElement(serialDescriptor, 0, t0.a, null);
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 1);
            l6 = l10;
            str2 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, v1.a, null);
            str = decodeStringElement;
            i5 = 7;
        } else {
            boolean z5 = true;
            int i6 = 0;
            String str3 = null;
            String str4 = null;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                if (decodeElementIndex == -1) {
                    z5 = false;
                } else if (decodeElementIndex == 0) {
                    l7 = (Long) beginStructure.decodeNullableSerializableElement(serialDescriptor, 0, t0.a, l7);
                    i6 |= 1;
                } else if (decodeElementIndex == 1) {
                    str3 = beginStructure.decodeStringElement(serialDescriptor, 1);
                    i6 |= 2;
                } else {
                    if (decodeElementIndex != 2) {
                        throw new r(decodeElementIndex);
                    }
                    str4 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, v1.a, str4);
                    i6 |= 4;
                }
            }
            i5 = i6;
            l6 = l7;
            str = str3;
            str2 = str4;
        }
        beginStructure.endStructure(serialDescriptor);
        return new CheckpointEmoji(i5, l6, str, str2, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull CheckpointEmoji value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        CheckpointEmoji.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
