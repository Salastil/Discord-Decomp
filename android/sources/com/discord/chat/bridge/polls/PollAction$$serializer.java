package com.discord.chat.bridge.polls;

import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.v1;
import com.facebook.react.uimanager.ViewProps;
import ds.r;
import fo.d;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/polls/PollAction.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/polls/PollAction;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/polls/PollAction;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/polls/PollAction;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class PollAction$$serializer implements h0 {

    @NotNull
    public static final PollAction$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        PollAction$$serializer pollAction$$serializer = new PollAction$$serializer();
        INSTANCE = pollAction$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.polls.PollAction", pollAction$$serializer, 6);
        j1Var.k("label", false);
        j1Var.k("presentation", false);
        j1Var.k(ViewProps.ENABLED, false);
        j1Var.k("type", true);
        j1Var.k("secondaryLabel", true);
        j1Var.k(ViewProps.ACCESSIBILITY_HINT, true);
        descriptor = j1Var;
    }

    private PollAction$$serializer() {
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        Lazy[] lazyArr;
        lazyArr = PollAction.$childSerializers;
        v1 v1Var = v1.a;
        return new KSerializer[]{v1Var, lazyArr[1].getValue(), g.a, e.o(v1Var), e.o(v1Var), e.o(v1Var)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final PollAction deserialize(@NotNull Decoder decoder) {
        Lazy[] lazyArr;
        boolean z5;
        int i5;
        String str;
        PollActionPresentation pollActionPresentation;
        String str2;
        String str3;
        String str4;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        lazyArr = PollAction.$childSerializers;
        if (beginStructure.decodeSequentially()) {
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 0);
            PollActionPresentation pollActionPresentation2 = (PollActionPresentation) beginStructure.decodeSerializableElement(serialDescriptor, 1, (DeserializationStrategy) lazyArr[1].getValue(), null);
            boolean decodeBooleanElement = beginStructure.decodeBooleanElement(serialDescriptor, 2);
            v1 v1Var = v1.a;
            String str5 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, v1Var, null);
            String str6 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1Var, null);
            pollActionPresentation = pollActionPresentation2;
            str = decodeStringElement;
            str4 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, v1Var, null);
            str2 = str5;
            str3 = str6;
            z5 = decodeBooleanElement;
            i5 = 63;
        } else {
            boolean z6 = true;
            boolean z7 = false;
            String str7 = null;
            PollActionPresentation pollActionPresentation3 = null;
            String str8 = null;
            String str9 = null;
            String str10 = null;
            int i6 = 0;
            while (z6) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z6 = false;
                        continue;
                    case 0:
                        str7 = beginStructure.decodeStringElement(serialDescriptor, 0);
                        i6 |= 1;
                        continue;
                    case 1:
                        pollActionPresentation3 = (PollActionPresentation) beginStructure.decodeSerializableElement(serialDescriptor, 1, (DeserializationStrategy) lazyArr[1].getValue(), pollActionPresentation3);
                        i6 |= 2;
                        break;
                    case 2:
                        z7 = beginStructure.decodeBooleanElement(serialDescriptor, 2);
                        i6 |= 4;
                        break;
                    case 3:
                        str8 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, v1.a, str8);
                        i6 |= 8;
                        break;
                    case 4:
                        str9 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1.a, str9);
                        i6 |= 16;
                        break;
                    case 5:
                        str10 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, v1.a, str10);
                        i6 |= 32;
                        break;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            z5 = z7;
            i5 = i6;
            str = str7;
            pollActionPresentation = pollActionPresentation3;
            str2 = str8;
            str3 = str9;
            str4 = str10;
        }
        beginStructure.endStructure(serialDescriptor);
        return new PollAction(i5, str, pollActionPresentation, z5, str2, str3, str4, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull PollAction value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        PollAction.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
