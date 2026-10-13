package com.discord.chat.bridge.row;

import androidx.recyclerview.widget.RecyclerView;
import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import com.discord.chat.bridge.BackgroundHighlight;
import com.discord.chat.bridge.BackgroundHighlight$$serializer;
import com.discord.chat.bridge.ChangeType;
import com.discord.chat.bridge.MessageBase;
import com.discord.chat.bridge.SwipeActionsType;
import com.discord.chat.bridge.reaction.ReactionsTheme;
import com.discord.chat.bridge.reaction.ReactionsTheme$$serializer;
import com.discord.chat.bridge.truncation.Truncation;
import com.discord.chat.bridge.truncation.Truncation$$serializer;
import com.discord.chat.presentation.root.MessageContextType;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/row/MessageRow.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/row/MessageRow;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/row/MessageRow;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/row/MessageRow;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class MessageRow$$serializer implements h0 {

    @NotNull
    public static final MessageRow$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        MessageRow$$serializer messageRow$$serializer = new MessageRow$$serializer();
        INSTANCE = messageRow$$serializer;
        j1 j1Var = new j1("1", messageRow$$serializer, 14);
        j1Var.k("index", false);
        j1Var.k("changeType", false);
        j1Var.k("jumped", true);
        j1Var.k("message", false);
        j1Var.k("canAddNewReactions", true);
        j1Var.k("addNewReactionAccessibilityLabel", true);
        j1Var.k("reactionsTheme", true);
        j1Var.k("renderContentOnly", true);
        j1Var.k("reactTag", true);
        j1Var.k("truncation", true);
        j1Var.k("backgroundHighlight", true);
        j1Var.k("swipeActions", true);
        j1Var.k("contextType", true);
        j1Var.k("forcedTheme", true);
        descriptor = j1Var;
    }

    private MessageRow$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        Lazy[] lazyArr;
        lazyArr = MessageRow.$childSerializers;
        o0 o0Var = o0.a;
        g gVar = g.a;
        KSerializer o6 = e.o(gVar);
        KSerializer o7 = e.o(gVar);
        v1 v1Var = v1.a;
        return new KSerializer[]{o0Var, ChangeType.Serializer.INSTANCE, o6, MessageSerializer.INSTANCE, o7, e.o(v1Var), e.o(ReactionsTheme$$serializer.INSTANCE), gVar, e.o(o0Var), e.o(Truncation$$serializer.INSTANCE), e.o(BackgroundHighlight$$serializer.INSTANCE), SwipeActionsType.Serializer.INSTANCE, e.o((KSerializer) lazyArr[12].getValue()), e.o(v1Var)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final MessageRow deserialize(@NotNull Decoder decoder) {
        Lazy[] lazyArr;
        MessageBase messageBase;
        String str;
        ChangeType changeType;
        int i5;
        MessageContextType messageContextType;
        SwipeActionsType swipeActionsType;
        BackgroundHighlight backgroundHighlight;
        Integer num;
        String str2;
        Truncation truncation;
        ReactionsTheme reactionsTheme;
        Boolean bool;
        Boolean bool2;
        boolean z5;
        int i6;
        ChangeType changeType2;
        Boolean bool3;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        lazyArr = MessageRow.$childSerializers;
        ChangeType changeType3 = null;
        if (beginStructure.decodeSequentially()) {
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 0);
            ChangeType changeType4 = (ChangeType) beginStructure.decodeSerializableElement(serialDescriptor, 1, ChangeType.Serializer.INSTANCE, null);
            g gVar = g.a;
            Boolean bool4 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, gVar, null);
            messageBase = (MessageBase) beginStructure.decodeSerializableElement(serialDescriptor, 3, MessageSerializer.INSTANCE, null);
            Boolean bool5 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, gVar, null);
            v1 v1Var = v1.a;
            String str3 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, v1Var, null);
            ReactionsTheme reactionsTheme2 = (ReactionsTheme) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, ReactionsTheme$$serializer.INSTANCE, null);
            boolean decodeBooleanElement = beginStructure.decodeBooleanElement(serialDescriptor, 7);
            Integer num2 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, o0.a, null);
            Truncation truncation2 = (Truncation) beginStructure.decodeNullableSerializableElement(serialDescriptor, 9, Truncation$$serializer.INSTANCE, null);
            BackgroundHighlight backgroundHighlight2 = (BackgroundHighlight) beginStructure.decodeNullableSerializableElement(serialDescriptor, 10, BackgroundHighlight$$serializer.INSTANCE, null);
            SwipeActionsType swipeActionsType2 = (SwipeActionsType) beginStructure.decodeSerializableElement(serialDescriptor, 11, SwipeActionsType.Serializer.INSTANCE, null);
            messageContextType = (MessageContextType) beginStructure.decodeNullableSerializableElement(serialDescriptor, 12, (DeserializationStrategy) lazyArr[12].getValue(), null);
            i6 = decodeIntElement;
            changeType = changeType4;
            str2 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 13, v1Var, null);
            truncation = truncation2;
            z5 = decodeBooleanElement;
            reactionsTheme = reactionsTheme2;
            str = str3;
            bool = bool5;
            num = num2;
            i5 = 16383;
            bool2 = bool4;
            swipeActionsType = swipeActionsType2;
            backgroundHighlight = backgroundHighlight2;
        } else {
            boolean z6 = true;
            Boolean bool6 = null;
            String str4 = null;
            messageBase = null;
            MessageContextType messageContextType2 = null;
            SwipeActionsType swipeActionsType3 = null;
            BackgroundHighlight backgroundHighlight3 = null;
            Integer num3 = null;
            String str5 = null;
            Truncation truncation3 = null;
            ReactionsTheme reactionsTheme3 = null;
            int i10 = 0;
            int i11 = 0;
            boolean z7 = false;
            Boolean bool7 = null;
            while (z6) {
                int i12 = i10;
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        bool3 = bool6;
                        z6 = false;
                        bool6 = bool3;
                        i10 = i12;
                    case 0:
                        i11 |= 1;
                        i10 = beginStructure.decodeIntElement(serialDescriptor, 0);
                        bool6 = bool6;
                    case 1:
                        bool3 = bool6;
                        changeType3 = (ChangeType) beginStructure.decodeSerializableElement(serialDescriptor, 1, ChangeType.Serializer.INSTANCE, changeType3);
                        i11 |= 2;
                        bool6 = bool3;
                        i10 = i12;
                    case 2:
                        changeType2 = changeType3;
                        bool6 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, g.a, bool6);
                        i11 |= 4;
                        i10 = i12;
                        changeType3 = changeType2;
                    case 3:
                        changeType2 = changeType3;
                        messageBase = (MessageBase) beginStructure.decodeSerializableElement(serialDescriptor, 3, MessageSerializer.INSTANCE, messageBase);
                        i11 |= 8;
                        i10 = i12;
                        changeType3 = changeType2;
                    case 4:
                        changeType2 = changeType3;
                        bool7 = (Boolean) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, g.a, bool7);
                        i11 |= 16;
                        i10 = i12;
                        changeType3 = changeType2;
                    case 5:
                        changeType2 = changeType3;
                        str4 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, v1.a, str4);
                        i11 |= 32;
                        i10 = i12;
                        changeType3 = changeType2;
                    case 6:
                        changeType2 = changeType3;
                        reactionsTheme3 = (ReactionsTheme) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, ReactionsTheme$$serializer.INSTANCE, reactionsTheme3);
                        i11 |= 64;
                        i10 = i12;
                        changeType3 = changeType2;
                    case 7:
                        changeType2 = changeType3;
                        z7 = beginStructure.decodeBooleanElement(serialDescriptor, 7);
                        i11 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        i10 = i12;
                        changeType3 = changeType2;
                    case 8:
                        changeType2 = changeType3;
                        num3 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, o0.a, num3);
                        i11 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                        i10 = i12;
                        changeType3 = changeType2;
                    case 9:
                        changeType2 = changeType3;
                        truncation3 = (Truncation) beginStructure.decodeNullableSerializableElement(serialDescriptor, 9, Truncation$$serializer.INSTANCE, truncation3);
                        i11 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                        i10 = i12;
                        changeType3 = changeType2;
                    case 10:
                        changeType2 = changeType3;
                        backgroundHighlight3 = (BackgroundHighlight) beginStructure.decodeNullableSerializableElement(serialDescriptor, 10, BackgroundHighlight$$serializer.INSTANCE, backgroundHighlight3);
                        i11 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
                        i10 = i12;
                        changeType3 = changeType2;
                    case 11:
                        changeType2 = changeType3;
                        swipeActionsType3 = (SwipeActionsType) beginStructure.decodeSerializableElement(serialDescriptor, 11, SwipeActionsType.Serializer.INSTANCE, swipeActionsType3);
                        i11 |= RecyclerView.ItemAnimator.FLAG_MOVED;
                        i10 = i12;
                        changeType3 = changeType2;
                    case 12:
                        changeType2 = changeType3;
                        messageContextType2 = (MessageContextType) beginStructure.decodeNullableSerializableElement(serialDescriptor, 12, (DeserializationStrategy) lazyArr[12].getValue(), messageContextType2);
                        i11 |= RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
                        i10 = i12;
                        changeType3 = changeType2;
                    case 13:
                        changeType2 = changeType3;
                        str5 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 13, v1.a, str5);
                        i11 |= 8192;
                        i10 = i12;
                        changeType3 = changeType2;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            str = str4;
            changeType = changeType3;
            i5 = i11;
            messageContextType = messageContextType2;
            swipeActionsType = swipeActionsType3;
            backgroundHighlight = backgroundHighlight3;
            num = num3;
            str2 = str5;
            truncation = truncation3;
            reactionsTheme = reactionsTheme3;
            bool = bool7;
            bool2 = bool6;
            z5 = z7;
            i6 = i10;
        }
        MessageBase messageBase2 = messageBase;
        beginStructure.endStructure(serialDescriptor);
        return new MessageRow(i5, i6, changeType, bool2, messageBase2, bool, str, reactionsTheme, z5, num, truncation, backgroundHighlight, swipeActionsType, messageContextType, str2, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull MessageRow value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        MessageRow.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
