package com.discord.chat.reactevents;

import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
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
import nf.e;
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/reactevents/TapInviteEvent.$serializer", "Lbs/h0;", "Lcom/discord/chat/reactevents/TapInviteEvent;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/reactevents/TapInviteEvent;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/reactevents/TapInviteEvent;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class TapInviteEvent$$serializer implements h0 {

    @NotNull
    public static final TapInviteEvent$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        TapInviteEvent$$serializer tapInviteEvent$$serializer = new TapInviteEvent$$serializer();
        INSTANCE = tapInviteEvent$$serializer;
        j1 j1Var = new j1("com.discord.chat.reactevents.TapInviteEvent", tapInviteEvent$$serializer, 4);
        j1Var.k("messageId", false);
        j1Var.k("index", false);
        j1Var.k("primary", false);
        j1Var.k("secondary", false);
        descriptor = j1Var;
    }

    private TapInviteEvent$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        g gVar = g.a;
        return new KSerializer[]{v1.a, o0.a, e.o(gVar), e.o(gVar)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final TapInviteEvent deserialize(@NotNull Decoder decoder) {
        int i5;
        int i6;
        String str;
        Boolean bool;
        Boolean bool2;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        if (beginStructure.decodeSequentially()) {
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 0);
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 1);
            g gVar = g.a;
            Boolean bool3 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, gVar, null);
            str = decodeStringElement;
            bool2 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, gVar, null);
            bool = bool3;
            i5 = decodeIntElement;
            i6 = 15;
        } else {
            boolean z5 = true;
            int i10 = 0;
            String str2 = null;
            Boolean bool4 = null;
            Boolean bool5 = null;
            int i11 = 0;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                if (decodeElementIndex == -1) {
                    z5 = false;
                } else if (decodeElementIndex == 0) {
                    str2 = beginStructure.decodeStringElement(serialDescriptor, 0);
                    i11 |= 1;
                } else if (decodeElementIndex == 1) {
                    i10 = beginStructure.decodeIntElement(serialDescriptor, 1);
                    i11 |= 2;
                } else if (decodeElementIndex == 2) {
                    bool4 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, g.a, bool4);
                    i11 |= 4;
                } else {
                    if (decodeElementIndex != 3) {
                        throw new r(decodeElementIndex);
                    }
                    bool5 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, g.a, bool5);
                    i11 |= 8;
                }
            }
            i5 = i10;
            i6 = i11;
            str = str2;
            bool = bool4;
            bool2 = bool5;
        }
        beginStructure.endStructure(serialDescriptor);
        return new TapInviteEvent(i6, str, i5, bool, bool2, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull TapInviteEvent value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        TapInviteEvent.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
