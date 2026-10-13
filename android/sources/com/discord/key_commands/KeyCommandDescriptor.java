package com.discord.key_commands;

import a3.e;
import android.view.KeyEvent;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.jank_stats.JankRecordStore;
import com.discord.react.utilities.NativeMapExtensionsKt;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import k0.d;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.collections.m0;
import kotlin.collections.r0;
import kotlin.collections.v0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.ranges.IntRange;
import org.jetbrains.annotations.NotNull;
import yo.j;

@Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\b\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u000b\b\u0086\b\u0018\u0000 \u001b2\u00020\u0001:\u0002\u001a\u001bB\u001f\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0006¢\u0006\u0004\b\u0007\u0010\bJ\u000e\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\u0010\u001a\u00020\u0011J\t\u0010\u0012\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0013\u001a\u00020\u0003HÆ\u0003J\t\u0010\u0014\u001a\u00020\u0006HÆ\u0003J'\u0010\u0015\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\b\b\u0002\u0010\u0005\u001a\u00020\u0006HÆ\u0001J\u0013\u0010\u0016\u001a\u00020\u000f2\b\u0010\u0017\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0018\u001a\u00020\u0006HÖ\u0001J\t\u0010\u0019\u001a\u00020\u0003HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\nR\u0011\u0010\u0004\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\nR\u0011\u0010\u0005\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\r¨\u0006\u001c"}, d2 = {"Lcom/discord/key_commands/KeyCommandDescriptor;", "", "eventName", "", "input", "metaState", "", "<init>", "(Ljava/lang/String;Ljava/lang/String;I)V", "getEventName", "()Ljava/lang/String;", "getInput", "getMetaState", "()I", "matches", "", "event", "Landroid/view/KeyEvent;", "component1", "component2", "component3", "copy", "equals", JankRecordStore.SCREEN_OTHER, "hashCode", "toString", "ModifierFlags", "Companion", "key_commands_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class KeyCommandDescriptor {

    @NotNull
    private final String eventName;

    @NotNull
    private final String input;
    private final int metaState;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private static final Map<Integer, Integer> META_STATE_BY_MODIFIER_FLAG = v0.g(new Pair(Integer.valueOf(ModifierFlags.SHIFT), 1), new Pair(Integer.valueOf(ModifierFlags.CONTROL), Integer.valueOf(RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT)), new Pair(Integer.valueOf(ModifierFlags.ALTERNATE), 2), new Pair(Integer.valueOf(ModifierFlags.COMMAND), Integer.valueOf(ModifierFlags.ALPHA_SHIFT)));

    @NotNull
    private static final Map<String, Integer> KEY_CODES_BY_INPUT_NAME = v0.g(new Pair("UIKeyInputEscape", 111), new Pair("UIKeyInputUpArrow", 19), new Pair("UIKeyInputDownArrow", 20), new Pair("UIKeyInputLeftArrow", 21), new Pair("UIKeyInputRightArrow", 22), new Pair("UIKeyInputPageUp", 92), new Pair("UIKeyInputPageDown", 93), new Pair("UIKeyInputHome", 122), new Pair("UIKeyInputEnd", 123));

    @Metadata(d1 = {"\u00006\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010$\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0010\u0010\t\u001a\u0004\u0018\u00010\n2\u0006\u0010\u000b\u001a\u00020\fJ\u0016\u0010\r\u001a\b\u0012\u0004\u0012\u00020\n0\u000e2\b\u0010\u000f\u001a\u0004\u0018\u00010\u0010J\u0010\u0010\u0011\u001a\u00020\u00062\u0006\u0010\u0012\u001a\u00020\u0006H\u0002R\u001a\u0010\u0004\u001a\u000e\u0012\u0004\u0012\u00020\u0006\u0012\u0004\u0012\u00020\u00060\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u001a\u0010\u0007\u001a\u000e\u0012\u0004\u0012\u00020\b\u0012\u0004\u0012\u00020\u00060\u0005X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0013"}, d2 = {"Lcom/discord/key_commands/KeyCommandDescriptor$Companion;", "", "<init>", "()V", "META_STATE_BY_MODIFIER_FLAG", "", "", "KEY_CODES_BY_INPUT_NAME", "", "fromReadableMap", "Lcom/discord/key_commands/KeyCommandDescriptor;", "map", "Lcom/facebook/react/bridge/ReadableMap;", "listFromReadableArray", "", "array", "Lcom/facebook/react/bridge/ReadableArray;", "metaState", "modifierFlags", "key_commands_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    @SourceDebugExtension({"SMAP\nKeyCommandDescriptor.kt\nKotlin\n*S Kotlin\n*F\n+ 1 KeyCommandDescriptor.kt\ncom/discord/key_commands/KeyCommandDescriptor$Companion\n+ 2 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,83:1\n1617#2,9:84\n1869#2:93\n1870#2:96\n1626#2:97\n1803#2,3:98\n1#3:94\n1#3:95\n*S KotlinDebug\n*F\n+ 1 KeyCommandDescriptor.kt\ncom/discord/key_commands/KeyCommandDescriptor$Companion\n*L\n74#1:84,9\n74#1:93\n74#1:96\n74#1:97\n78#1:98,3\n74#1:95\n*E\n"})
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private final int metaState(int modifierFlags) {
            int i5 = 0;
            for (Map.Entry entry : KeyCommandDescriptor.META_STATE_BY_MODIFIER_FLAG.entrySet()) {
                int intValue = ((Number) entry.getKey()).intValue();
                int intValue2 = ((Number) entry.getValue()).intValue();
                if ((intValue & modifierFlags) != 0) {
                    i5 |= intValue2;
                }
            }
            return i5;
        }

        public final KeyCommandDescriptor fromReadableMap(@NotNull ReadableMap map) {
            String nullableNonEmptyString$default;
            Intrinsics.checkNotNullParameter(map, "map");
            String nullableNonEmptyString$default2 = NativeMapExtensionsKt.getNullableNonEmptyString$default(map, "eventName", null, 2, null);
            if (nullableNonEmptyString$default2 == null || (nullableNonEmptyString$default = NativeMapExtensionsKt.getNullableNonEmptyString$default(map, "input", null, 2, null)) == null) {
                return null;
            }
            return new KeyCommandDescriptor(nullableNonEmptyString$default2, nullableNonEmptyString$default, metaState(NativeMapExtensionsKt.getInt(map, "modifierFlags", 0)));
        }

        @NotNull
        public final List<KeyCommandDescriptor> listFromReadableArray(ReadableArray array) {
            if (array == null) {
                return m0.f13512d;
            }
            IntRange i5 = j.i(0, array.size());
            ArrayList arrayList = new ArrayList();
            Iterator it = i5.iterator();
            while (it.hasNext()) {
                ReadableMap map = array.getMap(((r0) it).nextInt());
                KeyCommandDescriptor fromReadableMap = map != null ? KeyCommandDescriptor.INSTANCE.fromReadableMap(map) : null;
                if (fromReadableMap != null) {
                    arrayList.add(fromReadableMap);
                }
            }
            return arrayList;
        }

        private Companion() {
        }
    }

    @Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0006\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003R\u000e\u0010\u0004\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000¨\u0006\u000b"}, d2 = {"Lcom/discord/key_commands/KeyCommandDescriptor$ModifierFlags;", "", "<init>", "()V", "ALPHA_SHIFT", "", "SHIFT", "CONTROL", "ALTERNATE", "COMMAND", "NUMERIC_PAD", "key_commands_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class ModifierFlags {
        public static final int ALPHA_SHIFT = 65536;
        public static final int ALTERNATE = 524288;
        public static final int COMMAND = 1048576;
        public static final int CONTROL = 262144;

        @NotNull
        public static final ModifierFlags INSTANCE = new ModifierFlags();
        public static final int NUMERIC_PAD = 2097152;
        public static final int SHIFT = 131072;

        private ModifierFlags() {
        }
    }

    public KeyCommandDescriptor(@NotNull String eventName, @NotNull String input, int i5) {
        Intrinsics.checkNotNullParameter(eventName, "eventName");
        Intrinsics.checkNotNullParameter(input, "input");
        this.eventName = eventName;
        this.input = input;
        this.metaState = i5;
    }

    public static /* synthetic */ KeyCommandDescriptor copy$default(KeyCommandDescriptor keyCommandDescriptor, String str, String str2, int i5, int i6, Object obj) {
        if ((i6 & 1) != 0) {
            str = keyCommandDescriptor.eventName;
        }
        if ((i6 & 2) != 0) {
            str2 = keyCommandDescriptor.input;
        }
        if ((i6 & 4) != 0) {
            i5 = keyCommandDescriptor.metaState;
        }
        return keyCommandDescriptor.copy(str, str2, i5);
    }

    @NotNull
    /* renamed from: component1, reason: from getter */
    public final String getEventName() {
        return this.eventName;
    }

    @NotNull
    /* renamed from: component2, reason: from getter */
    public final String getInput() {
        return this.input;
    }

    /* renamed from: component3, reason: from getter */
    public final int getMetaState() {
        return this.metaState;
    }

    @NotNull
    public final KeyCommandDescriptor copy(@NotNull String eventName, @NotNull String input, int metaState) {
        Intrinsics.checkNotNullParameter(eventName, "eventName");
        Intrinsics.checkNotNullParameter(input, "input");
        return new KeyCommandDescriptor(eventName, input, metaState);
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof KeyCommandDescriptor)) {
            return false;
        }
        KeyCommandDescriptor keyCommandDescriptor = (KeyCommandDescriptor) other;
        return Intrinsics.areEqual(this.eventName, keyCommandDescriptor.eventName) && Intrinsics.areEqual(this.input, keyCommandDescriptor.input) && this.metaState == keyCommandDescriptor.metaState;
    }

    @NotNull
    public final String getEventName() {
        return this.eventName;
    }

    @NotNull
    public final String getInput() {
        return this.input;
    }

    public final int getMetaState() {
        return this.metaState;
    }

    public int hashCode() {
        return Integer.hashCode(this.metaState) + e.d(this.eventName.hashCode() * 31, 31, this.input);
    }

    public final boolean matches(@NotNull KeyEvent event) {
        Intrinsics.checkNotNullParameter(event, "event");
        int i5 = this.metaState;
        if (!(i5 == 0 ? event.hasNoModifiers() : event.hasModifiers(i5))) {
            return false;
        }
        Integer num = KEY_CODES_BY_INPUT_NAME.get(this.input);
        if (num != null) {
            return event.getKeyCode() == num.intValue();
        }
        int unicodeChar = event.getUnicodeChar(0);
        return this.input.length() == 1 && unicodeChar != 0 && Character.toLowerCase(this.input.charAt(0)) == Character.toLowerCase((char) unicodeChar);
    }

    @NotNull
    public String toString() {
        String str = this.eventName;
        String str2 = this.input;
        return d.m(e.t("KeyCommandDescriptor(eventName=", str, ", input=", str2, ", metaState="), this.metaState, ")");
    }
}
