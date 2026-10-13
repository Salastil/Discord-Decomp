package com.discord.chat.bridge.botuikit;

import androidx.recyclerview.widget.RecyclerView;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.v1;
import com.discord.primitives.UserId;
import com.discord.primitives.UserId$$serializer;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.modules.dialog.AlertFragment;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/botuikit/ContentInventoryEntry.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/botuikit/ContentInventoryEntry;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/botuikit/ContentInventoryEntry;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/botuikit/ContentInventoryEntry;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class ContentInventoryEntry$$serializer implements h0 {

    @NotNull
    public static final ContentInventoryEntry$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        ContentInventoryEntry$$serializer contentInventoryEntry$$serializer = new ContentInventoryEntry$$serializer();
        INSTANCE = contentInventoryEntry$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.botuikit.ContentInventoryEntry", contentInventoryEntry$$serializer, 14);
        j1Var.k("authorId", false);
        j1Var.k("contentId", false);
        j1Var.k("imageUrl", false);
        j1Var.k("imageClickable", true);
        j1Var.k("avatarUrl", false);
        j1Var.k("platformIconUrl", true);
        j1Var.k("platformClickable", true);
        j1Var.k("userActionDescription", false);
        j1Var.k("userClickable", true);
        j1Var.k(AlertFragment.ARG_TITLE, false);
        j1Var.k("titleClickable", true);
        j1Var.k("subtitles", false);
        j1Var.k("gradientColors", false);
        j1Var.k("clickable", true);
        descriptor = j1Var;
    }

    private ContentInventoryEntry$$serializer() {
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        Lazy[] lazyArr;
        lazyArr = ContentInventoryEntry.$childSerializers;
        v1 v1Var = v1.a;
        ContentInventoryEntryClickable$$serializer contentInventoryEntryClickable$$serializer = ContentInventoryEntryClickable$$serializer.INSTANCE;
        return new KSerializer[]{UserId$$serializer.INSTANCE, v1Var, v1Var, e.o(contentInventoryEntryClickable$$serializer), v1Var, e.o(v1Var), e.o(contentInventoryEntryClickable$$serializer), v1Var, e.o(contentInventoryEntryClickable$$serializer), v1Var, e.o(contentInventoryEntryClickable$$serializer), lazyArr[11].getValue(), lazyArr[12].getValue(), e.o(contentInventoryEntryClickable$$serializer)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final ContentInventoryEntry deserialize(@NotNull Decoder decoder) {
        Lazy[] lazyArr;
        int i5;
        String str;
        String str2;
        String str3;
        ContentInventoryEntryClickable contentInventoryEntryClickable;
        List list;
        List list2;
        ContentInventoryEntryClickable contentInventoryEntryClickable2;
        ContentInventoryEntryClickable contentInventoryEntryClickable3;
        ContentInventoryEntryClickable contentInventoryEntryClickable4;
        ContentInventoryEntryClickable contentInventoryEntryClickable5;
        UserId userId;
        String str4;
        String str5;
        String str6;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        lazyArr = ContentInventoryEntry.$childSerializers;
        int i6 = 9;
        UserId userId2 = null;
        if (beginStructure.decodeSequentially()) {
            UserId userId3 = (UserId) beginStructure.decodeSerializableElement(serialDescriptor, 0, UserId$$serializer.INSTANCE, null);
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 1);
            String decodeStringElement2 = beginStructure.decodeStringElement(serialDescriptor, 2);
            ContentInventoryEntryClickable$$serializer contentInventoryEntryClickable$$serializer = ContentInventoryEntryClickable$$serializer.INSTANCE;
            ContentInventoryEntryClickable contentInventoryEntryClickable6 = (ContentInventoryEntryClickable) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, contentInventoryEntryClickable$$serializer, null);
            String decodeStringElement3 = beginStructure.decodeStringElement(serialDescriptor, 4);
            String str7 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, v1.a, null);
            ContentInventoryEntryClickable contentInventoryEntryClickable7 = (ContentInventoryEntryClickable) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, contentInventoryEntryClickable$$serializer, null);
            String decodeStringElement4 = beginStructure.decodeStringElement(serialDescriptor, 7);
            ContentInventoryEntryClickable contentInventoryEntryClickable8 = (ContentInventoryEntryClickable) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, contentInventoryEntryClickable$$serializer, null);
            String decodeStringElement5 = beginStructure.decodeStringElement(serialDescriptor, 9);
            ContentInventoryEntryClickable contentInventoryEntryClickable9 = (ContentInventoryEntryClickable) beginStructure.decodeNullableSerializableElement(serialDescriptor, 10, contentInventoryEntryClickable$$serializer, null);
            List list3 = (List) beginStructure.decodeSerializableElement(serialDescriptor, 11, (DeserializationStrategy) lazyArr[11].getValue(), null);
            list = (List) beginStructure.decodeSerializableElement(serialDescriptor, 12, (DeserializationStrategy) lazyArr[12].getValue(), null);
            contentInventoryEntryClickable = (ContentInventoryEntryClickable) beginStructure.decodeNullableSerializableElement(serialDescriptor, 13, contentInventoryEntryClickable$$serializer, null);
            str = decodeStringElement;
            str2 = str7;
            str6 = decodeStringElement5;
            str5 = decodeStringElement4;
            contentInventoryEntryClickable4 = contentInventoryEntryClickable7;
            contentInventoryEntryClickable2 = contentInventoryEntryClickable8;
            contentInventoryEntryClickable5 = contentInventoryEntryClickable6;
            contentInventoryEntryClickable3 = contentInventoryEntryClickable9;
            str4 = decodeStringElement3;
            str3 = decodeStringElement2;
            i5 = 16383;
            list2 = list3;
            userId = userId3;
        } else {
            boolean z5 = true;
            int i10 = 0;
            String str8 = null;
            String str9 = null;
            String str10 = null;
            ContentInventoryEntryClickable contentInventoryEntryClickable10 = null;
            List list4 = null;
            List list5 = null;
            ContentInventoryEntryClickable contentInventoryEntryClickable11 = null;
            ContentInventoryEntryClickable contentInventoryEntryClickable12 = null;
            ContentInventoryEntryClickable contentInventoryEntryClickable13 = null;
            ContentInventoryEntryClickable contentInventoryEntryClickable14 = null;
            String str11 = null;
            String str12 = null;
            String str13 = null;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z5 = false;
                    case 0:
                        userId2 = (UserId) beginStructure.decodeSerializableElement(serialDescriptor, 0, UserId$$serializer.INSTANCE, userId2);
                        i10 |= 1;
                        i6 = 9;
                    case 1:
                        i10 |= 2;
                        str8 = beginStructure.decodeStringElement(serialDescriptor, 1);
                        i6 = 9;
                    case 2:
                        str10 = beginStructure.decodeStringElement(serialDescriptor, 2);
                        i10 |= 4;
                        i6 = 9;
                    case 3:
                        contentInventoryEntryClickable14 = (ContentInventoryEntryClickable) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, ContentInventoryEntryClickable$$serializer.INSTANCE, contentInventoryEntryClickable14);
                        i10 |= 8;
                        i6 = 9;
                    case 4:
                        str11 = beginStructure.decodeStringElement(serialDescriptor, 4);
                        i10 |= 16;
                        i6 = 9;
                    case 5:
                        str9 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, v1.a, str9);
                        i10 |= 32;
                        i6 = 9;
                    case 6:
                        contentInventoryEntryClickable13 = (ContentInventoryEntryClickable) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, ContentInventoryEntryClickable$$serializer.INSTANCE, contentInventoryEntryClickable13);
                        i10 |= 64;
                        i6 = 9;
                    case 7:
                        str12 = beginStructure.decodeStringElement(serialDescriptor, 7);
                        i10 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        i6 = 9;
                    case 8:
                        contentInventoryEntryClickable11 = (ContentInventoryEntryClickable) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, ContentInventoryEntryClickable$$serializer.INSTANCE, contentInventoryEntryClickable11);
                        i10 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                        i6 = 9;
                    case 9:
                        int i11 = i6;
                        str13 = beginStructure.decodeStringElement(serialDescriptor, i11);
                        i10 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                        i6 = i11;
                    case 10:
                        contentInventoryEntryClickable12 = (ContentInventoryEntryClickable) beginStructure.decodeNullableSerializableElement(serialDescriptor, 10, ContentInventoryEntryClickable$$serializer.INSTANCE, contentInventoryEntryClickable12);
                        i10 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
                        i6 = 9;
                    case 11:
                        list5 = (List) beginStructure.decodeSerializableElement(serialDescriptor, 11, (DeserializationStrategy) lazyArr[11].getValue(), list5);
                        i10 |= RecyclerView.ItemAnimator.FLAG_MOVED;
                        i6 = 9;
                    case 12:
                        list4 = (List) beginStructure.decodeSerializableElement(serialDescriptor, 12, (DeserializationStrategy) lazyArr[12].getValue(), list4);
                        i10 |= RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
                        i6 = 9;
                    case 13:
                        contentInventoryEntryClickable10 = (ContentInventoryEntryClickable) beginStructure.decodeNullableSerializableElement(serialDescriptor, 13, ContentInventoryEntryClickable$$serializer.INSTANCE, contentInventoryEntryClickable10);
                        i10 |= 8192;
                        i6 = 9;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            i5 = i10;
            str = str8;
            str2 = str9;
            str3 = str10;
            contentInventoryEntryClickable = contentInventoryEntryClickable10;
            list = list4;
            list2 = list5;
            contentInventoryEntryClickable2 = contentInventoryEntryClickable11;
            contentInventoryEntryClickable3 = contentInventoryEntryClickable12;
            contentInventoryEntryClickable4 = contentInventoryEntryClickable13;
            contentInventoryEntryClickable5 = contentInventoryEntryClickable14;
            userId = userId2;
            str4 = str11;
            str5 = str12;
            str6 = str13;
        }
        beginStructure.endStructure(serialDescriptor);
        return new ContentInventoryEntry(i5, userId, str, str3, contentInventoryEntryClickable5, str4, str2, contentInventoryEntryClickable4, str5, contentInventoryEntryClickable2, str6, contentInventoryEntryClickable3, list2, list, contentInventoryEntryClickable, null, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull ContentInventoryEntry value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        ContentInventoryEntry.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
