package app.rive.runtime.kotlin.core;

import a3.e;
import app.rive.runtime.kotlin.core.errors.ViewModelException;
import com.discord.jank_stats.JankRecordStore;
import com.facebook.react.devsupport.StackTraceHelper;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.locks.ReentrantLock;
import k0.d;
import ki.b;
import kotlin.Metadata;
import kotlin.collections.d0;
import kotlin.collections.u0;
import kotlin.enums.EnumEntries;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000<\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u000f\n\u0002\u0018\u0002\n\u0002\b\u0006\b\u0017\u0018\u00002\u00020\u0001:\u0002'(B\u0017\b\u0000\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0002\u0010\u0006J\u0011\u0010\u0018\u001a\u00020\u00032\u0006\u0010\u0019\u001a\u00020\u0003H\u0095 J\u0011\u0010\u001a\u001a\u00020\u00032\u0006\u0010\u0019\u001a\u00020\u0003H\u0092 J\u0019\u0010\u001b\u001a\u00020\u00032\u0006\u0010\u0019\u001a\u00020\u00032\u0006\u0010\u001c\u001a\u00020\nH\u0092 J\u0019\u0010\u001d\u001a\u00020\u00032\u0006\u0010\u0019\u001a\u00020\u00032\u0006\u0010\r\u001a\u00020\u000eH\u0092 J\u0017\u0010\u001e\u001a\b\u0012\u0004\u0012\u00020\u00130\u00122\u0006\u0010\u0019\u001a\u00020\u0003H\u0092 J\u0011\u0010\u001f\u001a\u00020\n2\u0006\u0010\u0019\u001a\u00020\u0003H\u0092 J\u0011\u0010 \u001a\u00020\u000e2\u0006\u0010\u0019\u001a\u00020\u0003H\u0092 J\u0011\u0010!\u001a\u00020\n2\u0006\u0010\u0019\u001a\u00020\u0003H\u0092 J\b\u0010\"\u001a\u00020#H\u0016J\b\u0010$\u001a\u00020#H\u0016J\u0010\u0010%\u001a\u00020#2\u0006\u0010\u001c\u001a\u00020\nH\u0016J\u0010\u0010&\u001a\u00020#2\u0006\u0010\r\u001a\u00020\u000eH\u0016R\u0014\u0010\u0004\u001a\u00020\u0005X\u0094\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bR\u0014\u0010\t\u001a\u00020\n8VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\u000b\u0010\fR\u0014\u0010\r\u001a\u00020\u000e8VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\u000f\u0010\u0010R\u001a\u0010\u0011\u001a\b\u0012\u0004\u0012\u00020\u00130\u00128VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\u0014\u0010\u0015R\u0014\u0010\u0016\u001a\u00020\n8VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\u0017\u0010\f¨\u0006)"}, d2 = {"Lapp/rive/runtime/kotlin/core/ViewModel;", "Lapp/rive/runtime/kotlin/core/NativeObject;", "unsafeCppPointer", "", "fileLock", "Ljava/util/concurrent/locks/ReentrantLock;", "(JLjava/util/concurrent/locks/ReentrantLock;)V", "getFileLock", "()Ljava/util/concurrent/locks/ReentrantLock;", "instanceCount", "", "getInstanceCount", "()I", StackTraceHelper.NAME_KEY, "", "getName", "()Ljava/lang/String;", "properties", "", "Lapp/rive/runtime/kotlin/core/ViewModel$Property;", "getProperties", "()Ljava/util/List;", "propertyCount", "getPropertyCount", "cppCreateBlankInstance", "cppPointer", "cppCreateDefaultInstance", "cppCreateInstanceFromIndex", "index", "cppCreateInstanceFromName", "cppGetProperties", "cppInstanceCount", "cppName", "cppPropertyCount", "createBlankInstance", "Lapp/rive/runtime/kotlin/core/ViewModelInstance;", "createDefaultInstance", "createInstanceFromIndex", "createInstanceFromName", "Property", "PropertyDataType", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nViewModel.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ViewModel.kt\napp/rive/runtime/kotlin/core/ViewModel\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,161:1\n1#2:162\n*E\n"})
/* loaded from: classes.dex */
public class ViewModel extends NativeObject {
    public static final int $stable = 8;

    @NotNull
    private final ReentrantLock fileLock;

    @Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\t\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0087\b\u0018\u00002\u00020\u0001B\u0015\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0002\u0010\u0006J\t\u0010\u000b\u001a\u00020\u0003HÆ\u0003J\t\u0010\f\u001a\u00020\u0005HÆ\u0003J\u001d\u0010\r\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u0005HÆ\u0001J\u0013\u0010\u000e\u001a\u00020\u000f2\b\u0010\u0010\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0011\u001a\u00020\u0012HÖ\u0001J\t\u0010\u0013\u001a\u00020\u0005HÖ\u0001R\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bR\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\n¨\u0006\u0014"}, d2 = {"Lapp/rive/runtime/kotlin/core/ViewModel$Property;", "", "type", "Lapp/rive/runtime/kotlin/core/ViewModel$PropertyDataType;", StackTraceHelper.NAME_KEY, "", "(Lapp/rive/runtime/kotlin/core/ViewModel$PropertyDataType;Ljava/lang/String;)V", "getName", "()Ljava/lang/String;", "getType", "()Lapp/rive/runtime/kotlin/core/ViewModel$PropertyDataType;", "component1", "component2", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "", "toString", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
    public static final /* data */ class Property {
        public static final int $stable = 0;

        @NotNull
        private final String name;

        @NotNull
        private final PropertyDataType type;

        public Property(@NotNull PropertyDataType type, @NotNull String name) {
            Intrinsics.checkNotNullParameter(type, "type");
            Intrinsics.checkNotNullParameter(name, "name");
            this.type = type;
            this.name = name;
        }

        public static /* synthetic */ Property copy$default(Property property, PropertyDataType propertyDataType, String str, int i5, Object obj) {
            if ((i5 & 1) != 0) {
                propertyDataType = property.type;
            }
            if ((i5 & 2) != 0) {
                str = property.name;
            }
            return property.copy(propertyDataType, str);
        }

        @NotNull
        /* renamed from: component1, reason: from getter */
        public final PropertyDataType getType() {
            return this.type;
        }

        @NotNull
        /* renamed from: component2, reason: from getter */
        public final String getName() {
            return this.name;
        }

        @NotNull
        public final Property copy(@NotNull PropertyDataType type, @NotNull String name) {
            Intrinsics.checkNotNullParameter(type, "type");
            Intrinsics.checkNotNullParameter(name, "name");
            return new Property(type, name);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof Property)) {
                return false;
            }
            Property property = (Property) other;
            return this.type == property.type && Intrinsics.areEqual(this.name, property.name);
        }

        @NotNull
        public final String getName() {
            return this.name;
        }

        @NotNull
        public final PropertyDataType getType() {
            return this.type;
        }

        public int hashCode() {
            return this.name.hashCode() + (this.type.hashCode() * 31);
        }

        @NotNull
        public String toString() {
            return "Property(type=" + this.type + ", name=" + this.name + ")";
        }
    }

    /* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
    /* JADX WARN: Unknown enum class pattern. Please report as an issue! */
    @Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0000\n\u0002\u0010\b\n\u0002\b\u0012\b\u0086\u0081\u0002\u0018\u0000 \u00142\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001\u0014B\u000f\b\u0002\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0005\u0010\u0006j\u0002\b\u0007j\u0002\b\bj\u0002\b\tj\u0002\b\nj\u0002\b\u000bj\u0002\b\fj\u0002\b\rj\u0002\b\u000ej\u0002\b\u000fj\u0002\b\u0010j\u0002\b\u0011j\u0002\b\u0012j\u0002\b\u0013¨\u0006\u0015"}, d2 = {"Lapp/rive/runtime/kotlin/core/ViewModel$PropertyDataType;", "", "value", "", "(Ljava/lang/String;II)V", "getValue", "()I", "NONE", "STRING", "NUMBER", "BOOLEAN", "COLOR", "LIST", "ENUM", "TRIGGER", "VIEW_MODEL", "INTEGER", "SYMBOL_LIST_INDEX", "ASSET_IMAGE", "ARTBOARD", "Companion", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
    @SourceDebugExtension({"SMAP\nViewModel.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ViewModel.kt\napp/rive/runtime/kotlin/core/ViewModel$PropertyDataType\n+ 2 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n*L\n1#1,161:1\n1202#2,2:162\n1230#2,4:164\n*S KotlinDebug\n*F\n+ 1 ViewModel.kt\napp/rive/runtime/kotlin/core/ViewModel$PropertyDataType\n*L\n154#1:162,2\n154#1:164,4\n*E\n"})
    public static final class PropertyDataType {
        private static final /* synthetic */ EnumEntries $ENTRIES;
        private static final /* synthetic */ PropertyDataType[] $VALUES;

        /* renamed from: Companion, reason: from kotlin metadata */
        @NotNull
        public static final Companion INSTANCE;

        @NotNull
        private static final Map<Integer, PropertyDataType> map;
        private final int value;
        public static final PropertyDataType NONE = new PropertyDataType("NONE", 0, 0);
        public static final PropertyDataType STRING = new PropertyDataType("STRING", 1, 1);
        public static final PropertyDataType NUMBER = new PropertyDataType("NUMBER", 2, 2);
        public static final PropertyDataType BOOLEAN = new PropertyDataType("BOOLEAN", 3, 3);
        public static final PropertyDataType COLOR = new PropertyDataType("COLOR", 4, 4);
        public static final PropertyDataType LIST = new PropertyDataType("LIST", 5, 5);
        public static final PropertyDataType ENUM = new PropertyDataType("ENUM", 6, 6);
        public static final PropertyDataType TRIGGER = new PropertyDataType("TRIGGER", 7, 7);
        public static final PropertyDataType VIEW_MODEL = new PropertyDataType("VIEW_MODEL", 8, 8);
        public static final PropertyDataType INTEGER = new PropertyDataType("INTEGER", 9, 9);
        public static final PropertyDataType SYMBOL_LIST_INDEX = new PropertyDataType("SYMBOL_LIST_INDEX", 10, 10);
        public static final PropertyDataType ASSET_IMAGE = new PropertyDataType("ASSET_IMAGE", 11, 11);
        public static final PropertyDataType ARTBOARD = new PropertyDataType("ARTBOARD", 12, 12);

        @Metadata(d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010$\n\u0002\u0010\b\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u0012\u0010\u0007\u001a\u0004\u0018\u00010\u00062\u0006\u0010\b\u001a\u00020\u0005H\u0007R\u001a\u0010\u0003\u001a\u000e\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\u00060\u0004X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\t"}, d2 = {"Lapp/rive/runtime/kotlin/core/ViewModel$PropertyDataType$Companion;", "", "()V", "map", "", "", "Lapp/rive/runtime/kotlin/core/ViewModel$PropertyDataType;", "fromInt", "type", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
        public static final class Companion {
            public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
                this();
            }

            public final PropertyDataType fromInt(int type) {
                return (PropertyDataType) PropertyDataType.map.get(Integer.valueOf(type));
            }

            private Companion() {
            }
        }

        private static final /* synthetic */ PropertyDataType[] $values() {
            return new PropertyDataType[]{NONE, STRING, NUMBER, BOOLEAN, COLOR, LIST, ENUM, TRIGGER, VIEW_MODEL, INTEGER, SYMBOL_LIST_INDEX, ASSET_IMAGE, ARTBOARD};
        }

        static {
            PropertyDataType[] $values = $values();
            $VALUES = $values;
            $ENTRIES = b.p($values);
            INSTANCE = new Companion(null);
            EnumEntries entries = getEntries();
            int a = u0.a(d0.l(entries, 10));
            LinkedHashMap linkedHashMap = new LinkedHashMap(a < 16 ? 16 : a);
            for (Object obj : entries) {
                linkedHashMap.put(Integer.valueOf(((PropertyDataType) obj).value), obj);
            }
            map = linkedHashMap;
        }

        private PropertyDataType(String str, int i5, int i6) {
            this.value = i6;
        }

        public static final PropertyDataType fromInt(int i5) {
            return INSTANCE.fromInt(i5);
        }

        @NotNull
        public static EnumEntries getEntries() {
            return $ENTRIES;
        }

        public static PropertyDataType valueOf(String str) {
            return (PropertyDataType) Enum.valueOf(PropertyDataType.class, str);
        }

        public static PropertyDataType[] values() {
            return (PropertyDataType[]) $VALUES.clone();
        }

        public final int getValue() {
            return this.value;
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ViewModel(long j, @NotNull ReentrantLock fileLock) {
        super(j);
        Intrinsics.checkNotNullParameter(fileLock, "fileLock");
        this.fileLock = fileLock;
    }

    private native long cppCreateDefaultInstance(long cppPointer);

    private native long cppCreateInstanceFromIndex(long cppPointer, int index);

    private native long cppCreateInstanceFromName(long cppPointer, String name);

    private native List<Property> cppGetProperties(long cppPointer);

    private native int cppInstanceCount(long cppPointer);

    private native String cppName(long cppPointer);

    private native int cppPropertyCount(long cppPointer);

    public native long cppCreateBlankInstance(long cppPointer);

    @NotNull
    public ViewModelInstance createBlankInstance() {
        long cppCreateBlankInstance;
        synchronized (getFileLock()) {
            cppCreateBlankInstance = cppCreateBlankInstance(getCppPointer());
        }
        if (cppCreateBlankInstance == 0) {
            throw new ViewModelException("Could not create a blank ViewModel instance");
        }
        ViewModelInstance viewModelInstance = new ViewModelInstance(cppCreateBlankInstance, getFileLock());
        getDependencies().add(viewModelInstance);
        return viewModelInstance;
    }

    @NotNull
    public ViewModelInstance createDefaultInstance() {
        long cppCreateDefaultInstance;
        synchronized (getFileLock()) {
            cppCreateDefaultInstance = cppCreateDefaultInstance(getCppPointer());
        }
        if (cppCreateDefaultInstance == 0) {
            throw new ViewModelException("Could not create default ViewModel instance");
        }
        ViewModelInstance viewModelInstance = new ViewModelInstance(cppCreateDefaultInstance, getFileLock());
        getDependencies().add(viewModelInstance);
        return viewModelInstance;
    }

    @NotNull
    public ViewModelInstance createInstanceFromIndex(int index) {
        long cppCreateInstanceFromIndex;
        synchronized (getFileLock()) {
            cppCreateInstanceFromIndex = cppCreateInstanceFromIndex(getCppPointer(), index);
        }
        if (cppCreateInstanceFromIndex == 0) {
            throw new ViewModelException(d.i(index, "ViewModel instance not found: "));
        }
        ViewModelInstance viewModelInstance = new ViewModelInstance(cppCreateInstanceFromIndex, getFileLock());
        getDependencies().add(viewModelInstance);
        return viewModelInstance;
    }

    @NotNull
    public ViewModelInstance createInstanceFromName(@NotNull String name) {
        long cppCreateInstanceFromName;
        Intrinsics.checkNotNullParameter(name, "name");
        synchronized (getFileLock()) {
            cppCreateInstanceFromName = cppCreateInstanceFromName(getCppPointer(), name);
        }
        if (cppCreateInstanceFromName == 0) {
            throw new ViewModelException(e.k("ViewModel instance not found: ", name));
        }
        ViewModelInstance viewModelInstance = new ViewModelInstance(cppCreateInstanceFromName, getFileLock());
        getDependencies().add(viewModelInstance);
        return viewModelInstance;
    }

    @NotNull
    public ReentrantLock getFileLock() {
        return this.fileLock;
    }

    public int getInstanceCount() {
        return cppInstanceCount(getCppPointer());
    }

    @NotNull
    public String getName() {
        return cppName(getCppPointer());
    }

    @NotNull
    public List<Property> getProperties() {
        return cppGetProperties(getCppPointer());
    }

    public int getPropertyCount() {
        return cppPropertyCount(getCppPointer());
    }
}
