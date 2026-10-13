package com.discord.chat.bridge.botuikit;

import androidx.recyclerview.widget.RecyclerView;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import com.discord.primitives.UserId;
import com.discord.primitives.UserId$$serializer;
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
import nf.e;
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/botuikit/CheckpointDataV2025.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/botuikit/CheckpointDataV2025;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/botuikit/CheckpointDataV2025;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/botuikit/CheckpointDataV2025;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class CheckpointDataV2025$$serializer implements h0 {

    @NotNull
    public static final CheckpointDataV2025$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        CheckpointDataV2025$$serializer checkpointDataV2025$$serializer = new CheckpointDataV2025$$serializer();
        INSTANCE = checkpointDataV2025$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.botuikit.CheckpointDataV2025", checkpointDataV2025$$serializer, 13);
        j1Var.k("version", true);
        j1Var.k("authorId", false);
        j1Var.k("cardId", false);
        j1Var.k("cardAssetUrl", false);
        j1Var.k("powerLevel", false);
        j1Var.k("powerLevelUnits", false);
        j1Var.k("messagesString", false);
        j1Var.k("voiceString", false);
        j1Var.k("reactionString", false);
        j1Var.k("clickable", true);
        j1Var.k("topEmoji", true);
        j1Var.k("topGuild", true);
        j1Var.k("topGame", true);
        descriptor = j1Var;
    }

    private CheckpointDataV2025$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        KSerializer o6 = e.o(CheckpointCardClickable$$serializer.INSTANCE);
        KSerializer o7 = e.o(CheckpointEmoji$$serializer.INSTANCE);
        KSerializer o10 = e.o(CheckpointGuild$$serializer.INSTANCE);
        KSerializer o11 = e.o(CheckpointApplication$$serializer.INSTANCE);
        o0 o0Var = o0.a;
        v1 v1Var = v1.a;
        return new KSerializer[]{o0Var, UserId$$serializer.INSTANCE, v1Var, v1Var, v1Var, o0Var, v1Var, v1Var, v1Var, o6, o7, o10, o11};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final CheckpointDataV2025 deserialize(@NotNull Decoder decoder) {
        int i5;
        int i6;
        CheckpointGuild checkpointGuild;
        CheckpointApplication checkpointApplication;
        CheckpointEmoji checkpointEmoji;
        CheckpointCardClickable checkpointCardClickable;
        UserId userId;
        String str;
        String str2;
        String str3;
        String str4;
        String str5;
        String str6;
        int i10;
        int i11;
        int i12;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        int i13 = 11;
        int i14 = 10;
        int i15 = 6;
        if (beginStructure.decodeSequentially()) {
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 0);
            UserId userId2 = (UserId) beginStructure.decodeSerializableElement(serialDescriptor, 1, UserId$$serializer.INSTANCE, null);
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 2);
            String decodeStringElement2 = beginStructure.decodeStringElement(serialDescriptor, 3);
            String decodeStringElement3 = beginStructure.decodeStringElement(serialDescriptor, 4);
            int decodeIntElement2 = beginStructure.decodeIntElement(serialDescriptor, 5);
            String decodeStringElement4 = beginStructure.decodeStringElement(serialDescriptor, 6);
            String decodeStringElement5 = beginStructure.decodeStringElement(serialDescriptor, 7);
            String decodeStringElement6 = beginStructure.decodeStringElement(serialDescriptor, 8);
            CheckpointCardClickable checkpointCardClickable2 = (CheckpointCardClickable) beginStructure.decodeNullableSerializableElement(serialDescriptor, 9, CheckpointCardClickable$$serializer.INSTANCE, null);
            CheckpointEmoji checkpointEmoji2 = (CheckpointEmoji) beginStructure.decodeNullableSerializableElement(serialDescriptor, 10, CheckpointEmoji$$serializer.INSTANCE, null);
            CheckpointGuild checkpointGuild2 = (CheckpointGuild) beginStructure.decodeNullableSerializableElement(serialDescriptor, 11, CheckpointGuild$$serializer.INSTANCE, null);
            i5 = 8191;
            checkpointApplication = (CheckpointApplication) beginStructure.decodeNullableSerializableElement(serialDescriptor, 12, CheckpointApplication$$serializer.INSTANCE, null);
            checkpointGuild = checkpointGuild2;
            checkpointEmoji = checkpointEmoji2;
            checkpointCardClickable = checkpointCardClickable2;
            str5 = decodeStringElement5;
            str4 = decodeStringElement4;
            i10 = decodeIntElement2;
            str2 = decodeStringElement2;
            str6 = decodeStringElement6;
            str3 = decodeStringElement3;
            str = decodeStringElement;
            userId = userId2;
            i6 = decodeIntElement;
        } else {
            CheckpointGuild checkpointGuild3 = null;
            CheckpointApplication checkpointApplication2 = null;
            CheckpointEmoji checkpointEmoji3 = null;
            String str7 = null;
            String str8 = null;
            String str9 = null;
            String str10 = null;
            String str11 = null;
            String str12 = null;
            boolean z5 = true;
            int i16 = 0;
            int i17 = 0;
            CheckpointCardClickable checkpointCardClickable3 = null;
            UserId userId3 = null;
            i5 = 0;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        i11 = i15;
                        z5 = false;
                        i15 = i11;
                        i13 = 11;
                    case 0:
                        i12 = i15;
                        i16 = beginStructure.decodeIntElement(serialDescriptor, 0);
                        i5 |= 1;
                        i15 = i12;
                        i13 = 11;
                        i14 = 10;
                    case 1:
                        i12 = i15;
                        userId3 = (UserId) beginStructure.decodeSerializableElement(serialDescriptor, 1, UserId$$serializer.INSTANCE, userId3);
                        i5 |= 2;
                        i15 = i12;
                        i13 = 11;
                        i14 = 10;
                    case 2:
                        i11 = i15;
                        str7 = beginStructure.decodeStringElement(serialDescriptor, 2);
                        i5 |= 4;
                        i15 = i11;
                        i13 = 11;
                    case 3:
                        i11 = i15;
                        str8 = beginStructure.decodeStringElement(serialDescriptor, 3);
                        i5 |= 8;
                        i15 = i11;
                        i13 = 11;
                    case 4:
                        i11 = i15;
                        str9 = beginStructure.decodeStringElement(serialDescriptor, 4);
                        i5 |= 16;
                        i15 = i11;
                        i13 = 11;
                    case 5:
                        i17 = beginStructure.decodeIntElement(serialDescriptor, 5);
                        i5 |= 32;
                        i15 = i15;
                        i13 = 11;
                    case 6:
                        int i18 = i15;
                        str10 = beginStructure.decodeStringElement(serialDescriptor, i18);
                        i5 |= 64;
                        i15 = i18;
                    case 7:
                        str11 = beginStructure.decodeStringElement(serialDescriptor, 7);
                        i5 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        i15 = 6;
                    case 8:
                        str12 = beginStructure.decodeStringElement(serialDescriptor, 8);
                        i5 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                        i15 = 6;
                    case 9:
                        checkpointCardClickable3 = (CheckpointCardClickable) beginStructure.decodeNullableSerializableElement(serialDescriptor, 9, CheckpointCardClickable$$serializer.INSTANCE, checkpointCardClickable3);
                        i5 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                        i15 = 6;
                    case 10:
                        checkpointEmoji3 = (CheckpointEmoji) beginStructure.decodeNullableSerializableElement(serialDescriptor, i14, CheckpointEmoji$$serializer.INSTANCE, checkpointEmoji3);
                        i5 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
                        i15 = 6;
                    case 11:
                        checkpointGuild3 = (CheckpointGuild) beginStructure.decodeNullableSerializableElement(serialDescriptor, i13, CheckpointGuild$$serializer.INSTANCE, checkpointGuild3);
                        i5 |= RecyclerView.ItemAnimator.FLAG_MOVED;
                        i15 = 6;
                    case 12:
                        checkpointApplication2 = (CheckpointApplication) beginStructure.decodeNullableSerializableElement(serialDescriptor, 12, CheckpointApplication$$serializer.INSTANCE, checkpointApplication2);
                        i5 |= RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
                        i15 = 6;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            i6 = i16;
            checkpointGuild = checkpointGuild3;
            checkpointApplication = checkpointApplication2;
            checkpointEmoji = checkpointEmoji3;
            checkpointCardClickable = checkpointCardClickable3;
            userId = userId3;
            str = str7;
            str2 = str8;
            str3 = str9;
            str4 = str10;
            str5 = str11;
            str6 = str12;
            i10 = i17;
        }
        int i19 = i5;
        beginStructure.endStructure(serialDescriptor);
        return new CheckpointDataV2025(i19, i6, userId, str, str2, str3, i10, str4, str5, str6, checkpointCardClickable, checkpointEmoji, checkpointGuild, checkpointApplication, null, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull CheckpointDataV2025 value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        CheckpointDataV2025.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
