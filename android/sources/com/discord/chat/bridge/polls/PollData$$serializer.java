package com.discord.chat.bridge.polls;

import androidx.recyclerview.widget.RecyclerView;
import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.v1;
import com.discord.chat.bridge.polls.PollChatAnswerInteractionType;
import com.discord.chat.bridge.polls.PollLayoutType;
import com.discord.key_commands.KeyCommandDescriptor;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
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
import kotlinx.serialization.internal.SerializationConstructorMarker;
import nf.e;
import org.jetbrains.annotations.NotNull;
import org.webrtc.PeerConnection;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/polls/PollData.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/polls/PollData;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/polls/PollData;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/polls/PollData;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class PollData$$serializer implements h0 {

    @NotNull
    public static final PollData$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        PollData$$serializer pollData$$serializer = new PollData$$serializer();
        INSTANCE = pollData$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.polls.PollData", pollData$$serializer, 17);
        j1Var.k("resources", false);
        j1Var.k("question", false);
        j1Var.k("answers", false);
        j1Var.k("answersInteraction", false);
        j1Var.k("answerTapAccessibilityLabel", true);
        j1Var.k("layoutType", false);
        j1Var.k("canSelectMultipleAnswers", true);
        j1Var.k("canTapAnswers", false);
        j1Var.k("canShowVoteCounts", false);
        j1Var.k("hasVoted", false);
        j1Var.k("isExpired", false);
        j1Var.k("containerStyle", true);
        j1Var.k("myAvatarUrl", true);
        j1Var.k("secondaryAction", true);
        j1Var.k("primaryAction", true);
        j1Var.k("tertiaryAction", true);
        j1Var.k("promptLabel", true);
        descriptor = j1Var;
    }

    private PollData$$serializer() {
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        Lazy[] lazyArr;
        lazyArr = PollData.$childSerializers;
        v1 v1Var = v1.a;
        g gVar = g.a;
        PollAction$$serializer pollAction$$serializer = PollAction$$serializer.INSTANCE;
        return new KSerializer[]{PollResources$$serializer.INSTANCE, PollMedia$$serializer.INSTANCE, lazyArr[2].getValue(), PollChatAnswerInteractionType.Serializer.INSTANCE, e.o(v1Var), PollLayoutType.Serializer.INSTANCE, gVar, gVar, gVar, gVar, gVar, v1Var, e.o(v1Var), e.o(pollAction$$serializer), e.o(pollAction$$serializer), e.o(pollAction$$serializer), e.o(v1Var)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final PollData deserialize(@NotNull Decoder decoder) {
        Lazy[] lazyArr;
        PollChatAnswerInteractionType pollChatAnswerInteractionType;
        int i5;
        PollLayoutType pollLayoutType;
        List list;
        PollMedia pollMedia;
        PollResources pollResources;
        String str;
        PollAction pollAction;
        PollAction pollAction2;
        String str2;
        String str3;
        PollAction pollAction3;
        String str4;
        boolean z5;
        boolean z6;
        boolean z7;
        boolean z8;
        boolean z10;
        Lazy[] lazyArr2;
        int i6;
        Lazy[] lazyArr3;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        lazyArr = PollData.$childSerializers;
        PollResources pollResources2 = null;
        if (beginStructure.decodeSequentially()) {
            PollResources pollResources3 = (PollResources) beginStructure.decodeSerializableElement(serialDescriptor, 0, PollResources$$serializer.INSTANCE, null);
            PollMedia pollMedia2 = (PollMedia) beginStructure.decodeSerializableElement(serialDescriptor, 1, PollMedia$$serializer.INSTANCE, null);
            List list2 = (List) beginStructure.decodeSerializableElement(serialDescriptor, 2, (DeserializationStrategy) lazyArr[2].getValue(), null);
            pollChatAnswerInteractionType = (PollChatAnswerInteractionType) beginStructure.decodeSerializableElement(serialDescriptor, 3, PollChatAnswerInteractionType.Serializer.INSTANCE, null);
            v1 v1Var = v1.a;
            String str5 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1Var, null);
            PollLayoutType pollLayoutType2 = (PollLayoutType) beginStructure.decodeSerializableElement(serialDescriptor, 5, PollLayoutType.Serializer.INSTANCE, null);
            boolean decodeBooleanElement = beginStructure.decodeBooleanElement(serialDescriptor, 6);
            boolean decodeBooleanElement2 = beginStructure.decodeBooleanElement(serialDescriptor, 7);
            boolean decodeBooleanElement3 = beginStructure.decodeBooleanElement(serialDescriptor, 8);
            boolean decodeBooleanElement4 = beginStructure.decodeBooleanElement(serialDescriptor, 9);
            boolean decodeBooleanElement5 = beginStructure.decodeBooleanElement(serialDescriptor, 10);
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 11);
            String str6 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 12, v1Var, null);
            PollAction$$serializer pollAction$$serializer = PollAction$$serializer.INSTANCE;
            PollAction pollAction4 = (PollAction) beginStructure.decodeNullableSerializableElement(serialDescriptor, 13, pollAction$$serializer, null);
            PollAction pollAction5 = (PollAction) beginStructure.decodeNullableSerializableElement(serialDescriptor, 14, pollAction$$serializer, null);
            pollAction3 = (PollAction) beginStructure.decodeNullableSerializableElement(serialDescriptor, 15, pollAction$$serializer, null);
            str = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 16, v1Var, null);
            str3 = str5;
            pollMedia = pollMedia2;
            i5 = 131071;
            z5 = decodeBooleanElement5;
            z6 = decodeBooleanElement4;
            z7 = decodeBooleanElement2;
            z8 = decodeBooleanElement;
            pollLayoutType = pollLayoutType2;
            z10 = decodeBooleanElement3;
            str4 = decodeStringElement;
            pollAction = pollAction5;
            pollAction2 = pollAction4;
            str2 = str6;
            list = list2;
            pollResources = pollResources3;
        } else {
            int i10 = 2;
            boolean z11 = true;
            int i11 = 0;
            boolean z12 = false;
            boolean z13 = false;
            boolean z14 = false;
            boolean z15 = false;
            boolean z16 = false;
            PollLayoutType pollLayoutType3 = null;
            pollChatAnswerInteractionType = null;
            List list3 = null;
            PollMedia pollMedia3 = null;
            String str7 = null;
            PollAction pollAction6 = null;
            PollAction pollAction7 = null;
            String str8 = null;
            String str9 = null;
            PollAction pollAction8 = null;
            String str10 = null;
            while (z11) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z11 = false;
                        i10 = 2;
                    case 0:
                        lazyArr3 = lazyArr;
                        pollResources2 = (PollResources) beginStructure.decodeSerializableElement(serialDescriptor, 0, PollResources$$serializer.INSTANCE, pollResources2);
                        i11 |= 1;
                        lazyArr = lazyArr3;
                        i10 = 2;
                    case 1:
                        lazyArr3 = lazyArr;
                        pollMedia3 = (PollMedia) beginStructure.decodeSerializableElement(serialDescriptor, 1, PollMedia$$serializer.INSTANCE, pollMedia3);
                        i11 |= 2;
                        lazyArr = lazyArr3;
                        i10 = 2;
                    case 2:
                        lazyArr2 = lazyArr;
                        list3 = (List) beginStructure.decodeSerializableElement(serialDescriptor, i10, (DeserializationStrategy) lazyArr2[i10].getValue(), list3);
                        i11 |= 4;
                        lazyArr = lazyArr2;
                    case 3:
                        lazyArr2 = lazyArr;
                        pollChatAnswerInteractionType = (PollChatAnswerInteractionType) beginStructure.decodeSerializableElement(serialDescriptor, 3, PollChatAnswerInteractionType.Serializer.INSTANCE, pollChatAnswerInteractionType);
                        i11 |= 8;
                        lazyArr = lazyArr2;
                    case 4:
                        lazyArr2 = lazyArr;
                        str9 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1.a, str9);
                        i11 |= 16;
                        lazyArr = lazyArr2;
                    case 5:
                        lazyArr2 = lazyArr;
                        pollLayoutType3 = (PollLayoutType) beginStructure.decodeSerializableElement(serialDescriptor, 5, PollLayoutType.Serializer.INSTANCE, pollLayoutType3);
                        i11 |= 32;
                        lazyArr = lazyArr2;
                    case 6:
                        lazyArr2 = lazyArr;
                        z15 = beginStructure.decodeBooleanElement(serialDescriptor, 6);
                        i11 |= 64;
                        lazyArr = lazyArr2;
                    case 7:
                        lazyArr2 = lazyArr;
                        z14 = beginStructure.decodeBooleanElement(serialDescriptor, 7);
                        i11 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        lazyArr = lazyArr2;
                    case 8:
                        lazyArr2 = lazyArr;
                        z16 = beginStructure.decodeBooleanElement(serialDescriptor, 8);
                        i11 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                        lazyArr = lazyArr2;
                    case 9:
                        lazyArr2 = lazyArr;
                        z13 = beginStructure.decodeBooleanElement(serialDescriptor, 9);
                        i11 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                        lazyArr = lazyArr2;
                    case 10:
                        z12 = beginStructure.decodeBooleanElement(serialDescriptor, 10);
                        i11 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
                        lazyArr = lazyArr;
                    case 11:
                        lazyArr2 = lazyArr;
                        str10 = beginStructure.decodeStringElement(serialDescriptor, 11);
                        i11 |= RecyclerView.ItemAnimator.FLAG_MOVED;
                        lazyArr = lazyArr2;
                    case 12:
                        lazyArr2 = lazyArr;
                        str8 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 12, v1.a, str8);
                        i11 |= RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
                        lazyArr = lazyArr2;
                    case 13:
                        lazyArr2 = lazyArr;
                        pollAction7 = (PollAction) beginStructure.decodeNullableSerializableElement(serialDescriptor, 13, PollAction$$serializer.INSTANCE, pollAction7);
                        i11 |= 8192;
                        lazyArr = lazyArr2;
                    case 14:
                        lazyArr2 = lazyArr;
                        pollAction6 = (PollAction) beginStructure.decodeNullableSerializableElement(serialDescriptor, 14, PollAction$$serializer.INSTANCE, pollAction6);
                        i11 |= 16384;
                        lazyArr = lazyArr2;
                    case 15:
                        lazyArr2 = lazyArr;
                        pollAction8 = (PollAction) beginStructure.decodeNullableSerializableElement(serialDescriptor, 15, PollAction$$serializer.INSTANCE, pollAction8);
                        i6 = PeerConnection.PORTALLOCATOR_ENABLE_ANY_ADDRESS_PORTS;
                        i11 |= i6;
                        lazyArr = lazyArr2;
                    case 16:
                        lazyArr2 = lazyArr;
                        str7 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 16, v1.a, str7);
                        i6 = KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT;
                        i11 |= i6;
                        lazyArr = lazyArr2;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            i5 = i11;
            pollLayoutType = pollLayoutType3;
            list = list3;
            pollMedia = pollMedia3;
            pollResources = pollResources2;
            str = str7;
            pollAction = pollAction6;
            pollAction2 = pollAction7;
            str2 = str8;
            str3 = str9;
            pollAction3 = pollAction8;
            str4 = str10;
            z5 = z12;
            z6 = z13;
            z7 = z14;
            z8 = z15;
            z10 = z16;
        }
        PollChatAnswerInteractionType pollChatAnswerInteractionType2 = pollChatAnswerInteractionType;
        beginStructure.endStructure(serialDescriptor);
        return new PollData(i5, pollResources, pollMedia, list, pollChatAnswerInteractionType2, str3, pollLayoutType, z8, z7, z10, z6, z5, str4, str2, pollAction2, pollAction, pollAction3, str, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull PollData value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        PollData.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
