package com.discord.user_search_worker;

import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import bs.x;
import ds.r;
import fo.d;
import java.util.List;
import java.util.Map;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/user_search_worker/UserSearchQuerySetPayload.$serializer", "Lbs/h0;", "Lcom/discord/user_search_worker/UserSearchQuerySetPayload;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/user_search_worker/UserSearchQuerySetPayload;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/user_search_worker/UserSearchQuerySetPayload;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "user_search_worker_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public /* synthetic */ class UserSearchQuerySetPayload$$serializer implements h0 {

    @NotNull
    public static final UserSearchQuerySetPayload$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        UserSearchQuerySetPayload$$serializer userSearchQuerySetPayload$$serializer = new UserSearchQuerySetPayload$$serializer();
        INSTANCE = userSearchQuerySetPayload$$serializer;
        j1 j1Var = new j1("com.discord.user_search_worker.UserSearchQuerySetPayload", userSearchQuerySetPayload$$serializer, 7);
        j1Var.k("query", false);
        j1Var.k("filters", true);
        j1Var.k("blacklist", true);
        j1Var.k("whitelist", true);
        j1Var.k("boosters", false);
        j1Var.k("boosterFallback", false);
        j1Var.k("limit", false);
        descriptor = j1Var;
    }

    private UserSearchQuerySetPayload$$serializer() {
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        Lazy[] lazyArr;
        lazyArr = UserSearchQuerySetPayload.$childSerializers;
        return new KSerializer[]{v1.a, e.o(UserSearchQuerySetFilters$$serializer.INSTANCE), e.o((KSerializer) lazyArr[2].getValue()), e.o((KSerializer) lazyArr[3].getValue()), lazyArr[4].getValue(), x.a, o0.a};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final UserSearchQuerySetPayload deserialize(@NotNull Decoder decoder) {
        Lazy[] lazyArr;
        int i5;
        Map map;
        List list;
        List list2;
        int i6;
        double d6;
        String str;
        UserSearchQuerySetFilters userSearchQuerySetFilters;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        lazyArr = UserSearchQuerySetPayload.$childSerializers;
        int i10 = 6;
        int i11 = 3;
        if (beginStructure.decodeSequentially()) {
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 0);
            UserSearchQuerySetFilters userSearchQuerySetFilters2 = (UserSearchQuerySetFilters) beginStructure.decodeNullableSerializableElement(serialDescriptor, 1, UserSearchQuerySetFilters$$serializer.INSTANCE, null);
            List list3 = (List) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, (DeserializationStrategy) lazyArr[2].getValue(), null);
            List list4 = (List) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, (DeserializationStrategy) lazyArr[3].getValue(), null);
            Map map2 = (Map) beginStructure.decodeSerializableElement(serialDescriptor, 4, (DeserializationStrategy) lazyArr[4].getValue(), null);
            double decodeDoubleElement = beginStructure.decodeDoubleElement(serialDescriptor, 5);
            map = map2;
            str = decodeStringElement;
            i5 = beginStructure.decodeIntElement(serialDescriptor, 6);
            i6 = 127;
            list = list4;
            list2 = list3;
            userSearchQuerySetFilters = userSearchQuerySetFilters2;
            d6 = decodeDoubleElement;
        } else {
            double d7 = 0.0d;
            int i12 = 2;
            boolean z5 = true;
            int i13 = 0;
            Map map3 = null;
            List list5 = null;
            String str2 = null;
            UserSearchQuerySetFilters userSearchQuerySetFilters3 = null;
            int i14 = 0;
            List list6 = null;
            while (z5) {
                int i15 = i11;
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z5 = false;
                        i11 = 3;
                        i12 = 2;
                    case 0:
                        str2 = beginStructure.decodeStringElement(serialDescriptor, 0);
                        i14 |= 1;
                        i10 = 6;
                        i11 = 3;
                        i12 = 2;
                    case 1:
                        userSearchQuerySetFilters3 = (UserSearchQuerySetFilters) beginStructure.decodeNullableSerializableElement(serialDescriptor, 1, UserSearchQuerySetFilters$$serializer.INSTANCE, userSearchQuerySetFilters3);
                        i14 |= 2;
                        i10 = 6;
                        i11 = 3;
                        i12 = 2;
                    case 2:
                        list6 = (List) beginStructure.decodeNullableSerializableElement(serialDescriptor, i12, (DeserializationStrategy) lazyArr[i12].getValue(), list6);
                        i14 |= 4;
                        i10 = 6;
                        i11 = 3;
                    case 3:
                        list5 = (List) beginStructure.decodeNullableSerializableElement(serialDescriptor, i15, (DeserializationStrategy) lazyArr[i15].getValue(), list5);
                        i14 |= 8;
                        i11 = i15;
                        i10 = 6;
                    case 4:
                        map3 = (Map) beginStructure.decodeSerializableElement(serialDescriptor, 4, (DeserializationStrategy) lazyArr[4].getValue(), map3);
                        i14 |= 16;
                        i11 = i15;
                    case 5:
                        d7 = beginStructure.decodeDoubleElement(serialDescriptor, 5);
                        i14 |= 32;
                        i11 = i15;
                    case 6:
                        i13 = beginStructure.decodeIntElement(serialDescriptor, i10);
                        i14 |= 64;
                        i11 = i15;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            i5 = i13;
            map = map3;
            list = list5;
            list2 = list6;
            i6 = i14;
            d6 = d7;
            str = str2;
            userSearchQuerySetFilters = userSearchQuerySetFilters3;
        }
        beginStructure.endStructure(serialDescriptor);
        return new UserSearchQuerySetPayload(i6, str, userSearchQuerySetFilters, list2, list, map, d6, i5, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull UserSearchQuerySetPayload value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        UserSearchQuerySetPayload.write$Self$user_search_worker_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
