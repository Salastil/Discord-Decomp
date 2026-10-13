package com.discord.chat.bridge.polls;

import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/polls/PollAnswer.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/polls/PollAnswer;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/polls/PollAnswer;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/polls/PollAnswer;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class PollAnswer$$serializer implements h0 {

    @NotNull
    public static final PollAnswer$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        PollAnswer$$serializer pollAnswer$$serializer = new PollAnswer$$serializer();
        INSTANCE = pollAnswer$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.polls.PollAnswer", pollAnswer$$serializer, 9);
        j1Var.k("answerId", false);
        j1Var.k("pollMedia", false);
        j1Var.k("didSelfVote", false);
        j1Var.k("votes", false);
        j1Var.k("votesPercentage", false);
        j1Var.k("isSelected", true);
        j1Var.k("isVictor", true);
        j1Var.k("shouldAnimateTransition", true);
        j1Var.k("style", true);
        descriptor = j1Var;
    }

    private PollAnswer$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        g gVar = g.a;
        KSerializer o6 = e.o(gVar);
        KSerializer o7 = e.o(gVar);
        KSerializer o10 = e.o(gVar);
        v1 v1Var = v1.a;
        return new KSerializer[]{v1Var, PollMedia$$serializer.INSTANCE, gVar, v1Var, o0.a, o6, o7, o10, v1Var};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final PollAnswer deserialize(@NotNull Decoder decoder) {
        int i5;
        Boolean bool;
        Boolean bool2;
        Boolean bool3;
        boolean z5;
        int i6;
        String str;
        PollMedia pollMedia;
        String str2;
        String str3;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        int i10 = 7;
        int i11 = 6;
        if (beginStructure.decodeSequentially()) {
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 0);
            PollMedia pollMedia2 = (PollMedia) beginStructure.decodeSerializableElement(serialDescriptor, 1, PollMedia$$serializer.INSTANCE, null);
            boolean decodeBooleanElement = beginStructure.decodeBooleanElement(serialDescriptor, 2);
            String decodeStringElement2 = beginStructure.decodeStringElement(serialDescriptor, 3);
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 4);
            g gVar = g.a;
            Boolean bool4 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, gVar, null);
            Boolean bool5 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, gVar, null);
            str = decodeStringElement;
            bool = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, gVar, null);
            bool2 = bool5;
            bool3 = bool4;
            str2 = decodeStringElement2;
            str3 = beginStructure.decodeStringElement(serialDescriptor, 8);
            i5 = decodeIntElement;
            z5 = decodeBooleanElement;
            pollMedia = pollMedia2;
            i6 = 511;
        } else {
            boolean z6 = true;
            int i12 = 0;
            int i13 = 0;
            Boolean bool6 = null;
            Boolean bool7 = null;
            String str4 = null;
            PollMedia pollMedia3 = null;
            String str5 = null;
            String str6 = null;
            boolean z7 = false;
            Boolean bool8 = null;
            while (z6) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z6 = false;
                        i10 = 7;
                    case 0:
                        str4 = beginStructure.decodeStringElement(serialDescriptor, 0);
                        i13 |= 1;
                        i10 = 7;
                        i11 = 6;
                    case 1:
                        pollMedia3 = (PollMedia) beginStructure.decodeSerializableElement(serialDescriptor, 1, PollMedia$$serializer.INSTANCE, pollMedia3);
                        i13 |= 2;
                        i10 = 7;
                        i11 = 6;
                    case 2:
                        i13 |= 4;
                        z7 = beginStructure.decodeBooleanElement(serialDescriptor, 2);
                    case 3:
                        str5 = beginStructure.decodeStringElement(serialDescriptor, 3);
                        i13 |= 8;
                    case 4:
                        i12 = beginStructure.decodeIntElement(serialDescriptor, 4);
                        i13 |= 16;
                    case 5:
                        bool8 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, g.a, bool8);
                        i13 |= 32;
                    case 6:
                        bool7 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, i11, g.a, bool7);
                        i13 |= 64;
                    case 7:
                        bool6 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, i10, g.a, bool6);
                        i13 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    case 8:
                        str6 = beginStructure.decodeStringElement(serialDescriptor, 8);
                        i13 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            i5 = i12;
            bool = bool6;
            bool2 = bool7;
            bool3 = bool8;
            z5 = z7;
            i6 = i13;
            str = str4;
            pollMedia = pollMedia3;
            str2 = str5;
            str3 = str6;
        }
        beginStructure.endStructure(serialDescriptor);
        return new PollAnswer(i6, str, pollMedia, z5, str2, i5, bool3, bool2, bool, str3, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull PollAnswer value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        PollAnswer.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
