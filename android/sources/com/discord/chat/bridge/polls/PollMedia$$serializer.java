package com.discord.chat.bridge.polls;

import bs.h0;
import bs.h1;
import bs.j1;
import bs.t0;
import bs.v1;
import ds.r;
import fo.d;
import java.util.Set;
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
import kotlinx.serialization.internal.SerializationConstructorMarker;
import nf.e;
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/polls/PollMedia.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/polls/PollMedia;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/polls/PollMedia;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/polls/PollMedia;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class PollMedia$$serializer implements h0 {

    @NotNull
    public static final PollMedia$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        PollMedia$$serializer pollMedia$$serializer = new PollMedia$$serializer();
        INSTANCE = pollMedia$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.polls.PollMedia", pollMedia$$serializer, 4);
        j1Var.k("text", true);
        j1Var.k("attachmentIds", true);
        j1Var.k("emoji", true);
        j1Var.k("stickerId", true);
        descriptor = j1Var;
    }

    private PollMedia$$serializer() {
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        Lazy[] lazyArr;
        lazyArr = PollMedia.$childSerializers;
        return new KSerializer[]{e.o(v1.a), lazyArr[1].getValue(), e.o(PollMediaEmoji$$serializer.INSTANCE), e.o(t0.a)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final PollMedia deserialize(@NotNull Decoder decoder) {
        Lazy[] lazyArr;
        int i5;
        String str;
        Set set;
        PollMediaEmoji pollMediaEmoji;
        Long l6;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        lazyArr = PollMedia.$childSerializers;
        String str2 = null;
        if (beginStructure.decodeSequentially()) {
            String str3 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 0, v1.a, null);
            Set set2 = (Set) beginStructure.decodeSerializableElement(serialDescriptor, 1, (DeserializationStrategy) lazyArr[1].getValue(), null);
            PollMediaEmoji pollMediaEmoji2 = (PollMediaEmoji) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, PollMediaEmoji$$serializer.INSTANCE, null);
            set = set2;
            str = str3;
            l6 = (Long) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, t0.a, null);
            pollMediaEmoji = pollMediaEmoji2;
            i5 = 15;
        } else {
            boolean z5 = true;
            int i6 = 0;
            Set set3 = null;
            PollMediaEmoji pollMediaEmoji3 = null;
            Long l7 = null;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                if (decodeElementIndex == -1) {
                    z5 = false;
                } else if (decodeElementIndex == 0) {
                    str2 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 0, v1.a, str2);
                    i6 |= 1;
                } else if (decodeElementIndex == 1) {
                    set3 = (Set) beginStructure.decodeSerializableElement(serialDescriptor, 1, (DeserializationStrategy) lazyArr[1].getValue(), set3);
                    i6 |= 2;
                } else if (decodeElementIndex == 2) {
                    pollMediaEmoji3 = (PollMediaEmoji) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, PollMediaEmoji$$serializer.INSTANCE, pollMediaEmoji3);
                    i6 |= 4;
                } else {
                    if (decodeElementIndex != 3) {
                        throw new r(decodeElementIndex);
                    }
                    l7 = (Long) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, t0.a, l7);
                    i6 |= 8;
                }
            }
            i5 = i6;
            str = str2;
            set = set3;
            pollMediaEmoji = pollMediaEmoji3;
            l6 = l7;
        }
        beginStructure.endStructure(serialDescriptor);
        return new PollMedia(i5, str, set, pollMediaEmoji, l6, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull PollMedia value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        PollMedia.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
