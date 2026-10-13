package app.rive.runtime.kotlin.core;

import a3.e;
import app.rive.runtime.kotlin.core.errors.ViewModelException;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.uimanager.ViewProps;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.locks.ReentrantLock;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.InlineMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.StringsKt__StringsKt;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000\u0098\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010%\n\u0002\u0010\u000e\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0011\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\b\u0005\b\u0017\u0018\u00002\u00020\u0001:\u0001QB\u0017\b\u0000\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0002\u0010\u0006J\u0010\u0010\u0015\u001a\u00020\u00162\u0006\u0010\u0017\u001a\u00020\u0003H\u0016J\u0011\u0010\u0018\u001a\u00020\u00162\u0006\u0010\u0019\u001a\u00020\u0003H\u0092 J\u0011\u0010\u001a\u001a\u00020\t2\u0006\u0010\u0019\u001a\u00020\u0003H\u0092 J\u0019\u0010\u001b\u001a\u00020\u00032\u0006\u0010\u0019\u001a\u00020\u00032\u0006\u0010\u001c\u001a\u00020\tH\u0092 J\u0019\u0010\u001d\u001a\u00020\u00032\u0006\u0010\u0019\u001a\u00020\u00032\u0006\u0010\u001c\u001a\u00020\tH\u0092 J\u0019\u0010\u001e\u001a\u00020\u00032\u0006\u0010\u0019\u001a\u00020\u00032\u0006\u0010\u001c\u001a\u00020\tH\u0092 J\u0019\u0010\u001f\u001a\u00020\u00032\u0006\u0010\u0019\u001a\u00020\u00032\u0006\u0010\u001c\u001a\u00020\tH\u0092 J\u0019\u0010 \u001a\u00020\u00032\u0006\u0010\u0019\u001a\u00020\u00032\u0006\u0010\u001c\u001a\u00020\tH\u0092 J\u0019\u0010!\u001a\u00020\u00032\u0006\u0010\u0019\u001a\u00020\u00032\u0006\u0010\u001c\u001a\u00020\tH\u0092 J\u0019\u0010\"\u001a\u00020\u00032\u0006\u0010\u0019\u001a\u00020\u00032\u0006\u0010\u001c\u001a\u00020\tH\u0092 J\u0019\u0010#\u001a\u00020\u00032\u0006\u0010\u0019\u001a\u00020\u00032\u0006\u0010\u001c\u001a\u00020\tH\u0092 J\u0019\u0010$\u001a\u00020\u00032\u0006\u0010\u0019\u001a\u00020\u00032\u0006\u0010\u001c\u001a\u00020\tH\u0092 J\u0019\u0010%\u001a\u00020\u00032\u0006\u0010\u0019\u001a\u00020\u00032\u0006\u0010\u001c\u001a\u00020\tH\u0092 J\u0011\u0010&\u001a\u00020\u00162\u0006\u0010\u0019\u001a\u00020\u0003H\u0092 J!\u0010'\u001a\u00020(2\u0006\u0010\u0019\u001a\u00020\u00032\u0006\u0010\u001c\u001a\u00020\t2\u0006\u0010)\u001a\u00020\u0003H\u0092 J\u0010\u0010*\u001a\u00020+2\u0006\u0010\u001c\u001a\u00020\tH\u0016J\u0010\u0010,\u001a\u00020-2\u0006\u0010\u001c\u001a\u00020\tH\u0016J\u0010\u0010.\u001a\u00020/2\u0006\u0010\u001c\u001a\u00020\tH\u0016J\u0010\u00100\u001a\u0002012\u0006\u0010\u001c\u001a\u00020\tH\u0016J\u0010\u00102\u001a\u0002032\u0006\u0010\u001c\u001a\u00020\tH\u0016J\u0010\u00104\u001a\u00020\u00002\u0006\u0010\u001c\u001a\u00020\tH\u0016J\u0010\u00105\u001a\u0002062\u0006\u0010\u001c\u001a\u00020\tH\u0016J\u0010\u00107\u001a\u0002082\u0006\u0010\u001c\u001a\u00020\tH\u0016J^\u00109\u001a\u0002H:\"\u000e\b\u0000\u0010:\u0018\u0001*\u0006\u0012\u0002\b\u00030\u00122\u0006\u0010\u001c\u001a\u00020\t2\u001a\b\u0004\u0010;\u001a\u0014\u0012\u0004\u0012\u00020\u0003\u0012\u0004\u0012\u00020\t\u0012\u0004\u0012\u00020\u00030<2\u001a\b\u0004\u0010=\u001a\u0014\u0012\u0004\u0012\u00020\u0003\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u0002H:0<H\u0092\b¢\u0006\u0002\u0010>J\u0010\u0010?\u001a\u00020@2\u0006\u0010\u001c\u001a\u00020\tH\u0016J\u0010\u0010A\u001a\u00020B2\u0006\u0010\u001c\u001a\u00020\tH\u0016J\r\u0010C\u001a\u00020\u0016H\u0011¢\u0006\u0002\bDJ\b\u0010E\u001a\u00020FH\u0016J\u0018\u0010G\u001a\u00020\u00162\u0006\u0010\u001c\u001a\u00020\t2\u0006\u0010H\u001a\u00020\u0000H\u0016J\b\u0010I\u001a\u00020JH\u0016J\u0016\u0010K\u001a\u00020\u00002\f\u0010L\u001a\b\u0012\u0004\u0012\u00020\t0MH\u0012J\u0015\u0010N\u001a\u00020\u00162\u0006\u0010O\u001a\u00020\u0005H\u0010¢\u0006\u0002\bPR&\u0010\u0007\u001a\u000e\u0012\u0004\u0012\u00020\t\u0012\u0004\u0012\u00020\u00000\bX\u0094\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\n\u0010\u000b\"\u0004\b\f\u0010\rR\u000e\u0010\u0004\u001a\u00020\u0005X\u0092\u000e¢\u0006\u0002\n\u0000R\u0014\u0010\u000e\u001a\u00020\t8VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\u000f\u0010\u0010R*\u0010\u0011\u001a\u0012\u0012\u0004\u0012\u00020\t\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00120\bX\u0094\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0013\u0010\u000b\"\u0004\b\u0014\u0010\r¨\u0006R"}, d2 = {"Lapp/rive/runtime/kotlin/core/ViewModelInstance;", "Lapp/rive/runtime/kotlin/core/NativeObject;", "unsafeCppPointer", "", "fileLock", "Ljava/util/concurrent/locks/ReentrantLock;", "(JLjava/util/concurrent/locks/ReentrantLock;)V", "children", "", "", "getChildren", "()Ljava/util/Map;", "setChildren", "(Ljava/util/Map;)V", StackTraceHelper.NAME_KEY, "getName", "()Ljava/lang/String;", "properties", "Lapp/rive/runtime/kotlin/core/ViewModelProperty;", "getProperties", "setProperties", "cppDelete", "", "pointer", "cppDerefInstance", "cppPointer", "cppName", "cppPropertyArtboard", "path", "cppPropertyBoolean", "cppPropertyColor", "cppPropertyEnum", "cppPropertyImage", "cppPropertyInstance", "cppPropertyList", "cppPropertyNumber", "cppPropertyString", "cppPropertyTrigger", "cppRefInstance", "cppSetInstanceProperty", "", "instancePointer", "getArtboardProperty", "Lapp/rive/runtime/kotlin/core/ViewModelArtboardProperty;", "getBooleanProperty", "Lapp/rive/runtime/kotlin/core/ViewModelBooleanProperty;", "getColorProperty", "Lapp/rive/runtime/kotlin/core/ViewModelColorProperty;", "getEnumProperty", "Lapp/rive/runtime/kotlin/core/ViewModelEnumProperty;", "getImageProperty", "Lapp/rive/runtime/kotlin/core/ViewModelImageProperty;", "getInstanceProperty", "getListProperty", "Lapp/rive/runtime/kotlin/core/ViewModelListProperty;", "getNumberProperty", "Lapp/rive/runtime/kotlin/core/ViewModelNumberProperty;", "getProperty", "T", "cppGetPropertyFn", "Lkotlin/Function2;", "constructor", "(Ljava/lang/String;Lkotlin/jvm/functions/Function2;Lkotlin/jvm/functions/Function2;)Lapp/rive/runtime/kotlin/core/ViewModelProperty;", "getStringProperty", "Lapp/rive/runtime/kotlin/core/ViewModelStringProperty;", "getTriggerProperty", "Lapp/rive/runtime/kotlin/core/ViewModelTriggerProperty;", "pollChanges", "pollChanges$kotlin_release", "release", "", "setInstanceProperty", "instance", "transfer", "Lapp/rive/runtime/kotlin/core/ViewModelInstance$Transfer;", "traverse", "parts", "", "updateFileLock", "newFileLock", "updateFileLock$kotlin_release", "Transfer", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nViewModelInstance.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ViewModelInstance.kt\napp/rive/runtime/kotlin/core/ViewModelInstance\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n+ 3 ViewModelInstance.kt\napp/rive/runtime/kotlin/core/ViewModelInstanceKt\n+ 4 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n+ 5 Maps.kt\nkotlin/collections/MapsKt__MapsKt\n*L\n1#1,1080:1\n386#1,24:1130\n386#1,24:1154\n386#1,24:1178\n386#1,24:1202\n386#1,24:1226\n386#1,24:1250\n386#1,24:1274\n386#1,24:1298\n386#1,24:1322\n1#2:1081\n1#2:1100\n119#3,7:1082\n42#3,9:1089\n88#3,2:1098\n51#3,6:1101\n90#3,13:1107\n58#3,2:1120\n1863#4,2:1122\n1863#4,2:1124\n1863#4,2:1126\n1863#4,2:1128\n381#5,7:1346\n*S KotlinDebug\n*F\n+ 1 ViewModelInstance.kt\napp/rive/runtime/kotlin/core/ViewModelInstance\n*L\n244#1:1130,24\n255#1:1154,24\n266#1:1178,24\n279#1:1202,24\n292#1:1226,24\n303#1:1250,24\n314#1:1274,24\n325#1:1298,24\n329#1:1322,24\n206#1:1100\n193#1:1082,7\n206#1:1089,9\n206#1:1098,2\n206#1:1101,6\n206#1:1107,13\n206#1:1120,2\n213#1:1122,2\n214#1:1124,2\n228#1:1126,2\n229#1:1128,2\n439#1:1346,7\n*E\n"})
/* loaded from: classes.dex */
public class ViewModelInstance extends NativeObject {
    public static final int $stable = 8;

    @NotNull
    private Map<String, ViewModelInstance> children;

    @NotNull
    private volatile ReentrantLock fileLock;

    @NotNull
    private Map<String, ViewModelProperty<?>> properties;

    @Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0003\b\u0007\u0018\u00002\u00020\u0001B\u000f\b\u0000\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004J\u0006\u0010\u0007\u001a\u00020\bJ\r\u0010\t\u001a\u00020\u0003H\u0000¢\u0006\u0002\b\nR\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0005\u001a\u00020\u0006X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u000b"}, d2 = {"Lapp/rive/runtime/kotlin/core/ViewModelInstance$Transfer;", "", "instance", "Lapp/rive/runtime/kotlin/core/ViewModelInstance;", "(Lapp/rive/runtime/kotlin/core/ViewModelInstance;)V", "valid", "", "dispose", "", ViewProps.END, "end$kotlin_release", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
    @SourceDebugExtension({"SMAP\nViewModelInstance.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ViewModelInstance.kt\napp/rive/runtime/kotlin/core/ViewModelInstance$Transfer\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,1080:1\n1#2:1081\n*E\n"})
    public static final class Transfer {
        public static final int $stable = 8;

        @NotNull
        private final ViewModelInstance instance;
        private boolean valid;

        public Transfer(@NotNull ViewModelInstance instance) {
            Intrinsics.checkNotNullParameter(instance, "instance");
            this.instance = instance;
            this.valid = true;
            if (instance.getRefCount() <= 0) {
                throw new ViewModelException("Cannot transfer a disposed ViewModelInstance.");
            }
            synchronized (instance.fileLock) {
                instance.cppRefInstance(instance.getCppPointer());
                Unit unit = Unit.a;
            }
            instance.acquire();
        }

        public final void dispose() {
            if (this.valid) {
                this.valid = false;
                this.instance.release();
            } else {
                throw new ViewModelException("Transfer of ViewModelInstance " + this.instance + " already ended. Cannot dispose.");
            }
        }

        @NotNull
        public final ViewModelInstance end$kotlin_release() {
            if (this.valid) {
                this.valid = false;
                return this.instance;
            }
            throw new ViewModelException("Transfer of ViewModelInstance " + this.instance + " already ended. Cannot end transfer again.");
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ViewModelInstance(long j, @NotNull ReentrantLock fileLock) {
        super(j);
        Intrinsics.checkNotNullParameter(fileLock, "fileLock");
        this.fileLock = fileLock;
        this.properties = new ConcurrentHashMap();
        this.children = new ConcurrentHashMap();
        synchronized (this.fileLock) {
            cppRefInstance(getCppPointer());
            Unit unit = Unit.a;
        }
    }

    private native void cppDerefInstance(long cppPointer);

    private native String cppName(long cppPointer);

    /* JADX INFO: Access modifiers changed from: private */
    public native long cppPropertyArtboard(long cppPointer, String path);

    /* JADX INFO: Access modifiers changed from: private */
    public native long cppPropertyBoolean(long cppPointer, String path);

    /* JADX INFO: Access modifiers changed from: private */
    public native long cppPropertyColor(long cppPointer, String path);

    /* JADX INFO: Access modifiers changed from: private */
    public native long cppPropertyEnum(long cppPointer, String path);

    /* JADX INFO: Access modifiers changed from: private */
    public native long cppPropertyImage(long cppPointer, String path);

    private native long cppPropertyInstance(long cppPointer, String path);

    /* JADX INFO: Access modifiers changed from: private */
    public native long cppPropertyList(long cppPointer, String path);

    /* JADX INFO: Access modifiers changed from: private */
    public native long cppPropertyNumber(long cppPointer, String path);

    /* JADX INFO: Access modifiers changed from: private */
    public native long cppPropertyString(long cppPointer, String path);

    /* JADX INFO: Access modifiers changed from: private */
    public native long cppPropertyTrigger(long cppPointer, String path);

    /* JADX INFO: Access modifiers changed from: private */
    public native void cppRefInstance(long cppPointer);

    private native boolean cppSetInstanceProperty(long cppPointer, String path, long instancePointer);

    private /* synthetic */ <T extends ViewModelProperty<?>> T getProperty(String path, Function2<? super Long, ? super String, Long> cppGetPropertyFn, Function2<? super Long, ? super ReentrantLock, ? extends T> constructor) {
        List split$default;
        T t5;
        split$default = StringsKt__StringsKt.split$default(path, new String[]{"/"}, false, 0, 6, null);
        List<String> subList = split$default.subList(0, split$default.size() - 1);
        String str = (String) CollectionsKt.Q(split$default);
        ViewModelInstance traverse = traverse(subList);
        synchronized (traverse.fileLock) {
            try {
                t5 = (T) traverse.getProperties().get(str);
                if (t5 != null) {
                    Intrinsics.reifiedOperationMarker(3, "T");
                } else {
                    long longValue = ((Number) cppGetPropertyFn.invoke(Long.valueOf(traverse.getCppPointer()), str)).longValue();
                    if (longValue == 0) {
                        throw new ViewModelException("Property not found: " + path);
                    }
                    t5 = (T) constructor.invoke(Long.valueOf(longValue), traverse.fileLock);
                    traverse.getProperties().put(str, t5);
                    getDependencies().add(t5);
                }
                InlineMarker.finallyStart(2);
            } catch (Throwable th2) {
                InlineMarker.finallyStart(1);
                InlineMarker.finallyEnd(1);
                throw th2;
            }
        }
        InlineMarker.finallyEnd(2);
        return t5;
    }

    private ViewModelInstance traverse(List<String> parts) {
        if (parts.isEmpty()) {
            return this;
        }
        String str = (String) CollectionsKt.K(parts);
        Map<String, ViewModelInstance> children = getChildren();
        ViewModelInstance viewModelInstance = children.get(str);
        if (viewModelInstance == null) {
            viewModelInstance = traverse$createChildInstance(this, str);
            children.put(str, viewModelInstance);
        }
        return viewModelInstance.traverse(parts.subList(1, parts.size()));
    }

    private static final ViewModelInstance traverse$createChildInstance(ViewModelInstance viewModelInstance, String str) {
        long cppPropertyInstance;
        synchronized (viewModelInstance.fileLock) {
            cppPropertyInstance = viewModelInstance.cppPropertyInstance(viewModelInstance.getCppPointer(), str);
        }
        if (cppPropertyInstance == 0) {
            throw new ViewModelException(e.k("Property not found: ", str));
        }
        ViewModelInstance viewModelInstance2 = new ViewModelInstance(cppPropertyInstance, viewModelInstance.fileLock);
        viewModelInstance.getChildren().put(str, viewModelInstance2);
        viewModelInstance.getDependencies().add(viewModelInstance2);
        return viewModelInstance2;
    }

    @Override // app.rive.runtime.kotlin.core.NativeObject
    public void cppDelete(long pointer) {
        synchronized (this.fileLock) {
            cppDerefInstance(pointer);
            Unit unit = Unit.a;
        }
    }

    @NotNull
    public ViewModelArtboardProperty getArtboardProperty(@NotNull String path) {
        List split$default;
        ViewModelProperty<?> viewModelProperty;
        Intrinsics.checkNotNullParameter(path, "path");
        split$default = StringsKt__StringsKt.split$default(path, new String[]{"/"}, false, 0, 6, null);
        List<String> subList = split$default.subList(0, split$default.size() - 1);
        String str = (String) CollectionsKt.Q(split$default);
        ViewModelInstance traverse = traverse(subList);
        synchronized (traverse.fileLock) {
            try {
                viewModelProperty = traverse.getProperties().get(str);
                if (viewModelProperty == null) {
                    long cppPropertyArtboard = cppPropertyArtboard(traverse.getCppPointer(), str);
                    if (cppPropertyArtboard == 0) {
                        throw new ViewModelException("Property not found: " + path);
                    }
                    ViewModelArtboardProperty viewModelArtboardProperty = new ViewModelArtboardProperty(cppPropertyArtboard, traverse.fileLock);
                    traverse.getProperties().put(str, viewModelArtboardProperty);
                    getDependencies().add(viewModelArtboardProperty);
                    viewModelProperty = viewModelArtboardProperty;
                } else if (!(viewModelProperty instanceof ViewModelArtboardProperty)) {
                    throw new ViewModelException("Property '" + str + "' exists but is not of the expected type.");
                }
            } finally {
            }
        }
        return (ViewModelArtboardProperty) viewModelProperty;
    }

    @NotNull
    public ViewModelBooleanProperty getBooleanProperty(@NotNull String path) {
        List split$default;
        ViewModelProperty<?> viewModelProperty;
        Intrinsics.checkNotNullParameter(path, "path");
        split$default = StringsKt__StringsKt.split$default(path, new String[]{"/"}, false, 0, 6, null);
        List<String> subList = split$default.subList(0, split$default.size() - 1);
        String str = (String) CollectionsKt.Q(split$default);
        ViewModelInstance traverse = traverse(subList);
        synchronized (traverse.fileLock) {
            try {
                viewModelProperty = traverse.getProperties().get(str);
                if (viewModelProperty == null) {
                    long cppPropertyBoolean = cppPropertyBoolean(traverse.getCppPointer(), str);
                    if (cppPropertyBoolean == 0) {
                        throw new ViewModelException("Property not found: " + path);
                    }
                    ViewModelBooleanProperty viewModelBooleanProperty = new ViewModelBooleanProperty(cppPropertyBoolean, traverse.fileLock);
                    traverse.getProperties().put(str, viewModelBooleanProperty);
                    getDependencies().add(viewModelBooleanProperty);
                    viewModelProperty = viewModelBooleanProperty;
                } else if (!(viewModelProperty instanceof ViewModelBooleanProperty)) {
                    throw new ViewModelException("Property '" + str + "' exists but is not of the expected type.");
                }
            } finally {
            }
        }
        return (ViewModelBooleanProperty) viewModelProperty;
    }

    @NotNull
    public Map<String, ViewModelInstance> getChildren() {
        return this.children;
    }

    @NotNull
    public ViewModelColorProperty getColorProperty(@NotNull String path) {
        List split$default;
        ViewModelProperty<?> viewModelProperty;
        Intrinsics.checkNotNullParameter(path, "path");
        split$default = StringsKt__StringsKt.split$default(path, new String[]{"/"}, false, 0, 6, null);
        List<String> subList = split$default.subList(0, split$default.size() - 1);
        String str = (String) CollectionsKt.Q(split$default);
        ViewModelInstance traverse = traverse(subList);
        synchronized (traverse.fileLock) {
            try {
                viewModelProperty = traverse.getProperties().get(str);
                if (viewModelProperty == null) {
                    long cppPropertyColor = cppPropertyColor(traverse.getCppPointer(), str);
                    if (cppPropertyColor == 0) {
                        throw new ViewModelException("Property not found: " + path);
                    }
                    ViewModelColorProperty viewModelColorProperty = new ViewModelColorProperty(cppPropertyColor, traverse.fileLock);
                    traverse.getProperties().put(str, viewModelColorProperty);
                    getDependencies().add(viewModelColorProperty);
                    viewModelProperty = viewModelColorProperty;
                } else if (!(viewModelProperty instanceof ViewModelColorProperty)) {
                    throw new ViewModelException("Property '" + str + "' exists but is not of the expected type.");
                }
            } finally {
            }
        }
        return (ViewModelColorProperty) viewModelProperty;
    }

    @NotNull
    public ViewModelEnumProperty getEnumProperty(@NotNull String path) {
        List split$default;
        ViewModelProperty<?> viewModelProperty;
        Intrinsics.checkNotNullParameter(path, "path");
        split$default = StringsKt__StringsKt.split$default(path, new String[]{"/"}, false, 0, 6, null);
        List<String> subList = split$default.subList(0, split$default.size() - 1);
        String str = (String) CollectionsKt.Q(split$default);
        ViewModelInstance traverse = traverse(subList);
        synchronized (traverse.fileLock) {
            try {
                viewModelProperty = traverse.getProperties().get(str);
                if (viewModelProperty == null) {
                    long cppPropertyEnum = cppPropertyEnum(traverse.getCppPointer(), str);
                    if (cppPropertyEnum == 0) {
                        throw new ViewModelException("Property not found: " + path);
                    }
                    ViewModelEnumProperty viewModelEnumProperty = new ViewModelEnumProperty(cppPropertyEnum, traverse.fileLock);
                    traverse.getProperties().put(str, viewModelEnumProperty);
                    getDependencies().add(viewModelEnumProperty);
                    viewModelProperty = viewModelEnumProperty;
                } else if (!(viewModelProperty instanceof ViewModelEnumProperty)) {
                    throw new ViewModelException("Property '" + str + "' exists but is not of the expected type.");
                }
            } finally {
            }
        }
        return (ViewModelEnumProperty) viewModelProperty;
    }

    @NotNull
    public ViewModelImageProperty getImageProperty(@NotNull String path) {
        List split$default;
        ViewModelProperty<?> viewModelProperty;
        Intrinsics.checkNotNullParameter(path, "path");
        split$default = StringsKt__StringsKt.split$default(path, new String[]{"/"}, false, 0, 6, null);
        List<String> subList = split$default.subList(0, split$default.size() - 1);
        String str = (String) CollectionsKt.Q(split$default);
        ViewModelInstance traverse = traverse(subList);
        synchronized (traverse.fileLock) {
            try {
                viewModelProperty = traverse.getProperties().get(str);
                if (viewModelProperty == null) {
                    long cppPropertyImage = cppPropertyImage(traverse.getCppPointer(), str);
                    if (cppPropertyImage == 0) {
                        throw new ViewModelException("Property not found: " + path);
                    }
                    ViewModelImageProperty viewModelImageProperty = new ViewModelImageProperty(cppPropertyImage, traverse.fileLock);
                    traverse.getProperties().put(str, viewModelImageProperty);
                    getDependencies().add(viewModelImageProperty);
                    viewModelProperty = viewModelImageProperty;
                } else if (!(viewModelProperty instanceof ViewModelImageProperty)) {
                    throw new ViewModelException("Property '" + str + "' exists but is not of the expected type.");
                }
            } finally {
            }
        }
        return (ViewModelImageProperty) viewModelProperty;
    }

    @NotNull
    public ViewModelInstance getInstanceProperty(@NotNull String path) {
        List<String> split$default;
        Intrinsics.checkNotNullParameter(path, "path");
        split$default = StringsKt__StringsKt.split$default(path, new String[]{"/"}, false, 0, 6, null);
        return traverse(split$default);
    }

    @NotNull
    public ViewModelListProperty getListProperty(@NotNull String path) {
        List split$default;
        ViewModelProperty<?> viewModelProperty;
        Intrinsics.checkNotNullParameter(path, "path");
        split$default = StringsKt__StringsKt.split$default(path, new String[]{"/"}, false, 0, 6, null);
        List<String> subList = split$default.subList(0, split$default.size() - 1);
        String str = (String) CollectionsKt.Q(split$default);
        ViewModelInstance traverse = traverse(subList);
        synchronized (traverse.fileLock) {
            try {
                viewModelProperty = traverse.getProperties().get(str);
                if (viewModelProperty == null) {
                    long cppPropertyList = cppPropertyList(traverse.getCppPointer(), str);
                    if (cppPropertyList == 0) {
                        throw new ViewModelException("Property not found: " + path);
                    }
                    ViewModelListProperty viewModelListProperty = new ViewModelListProperty(cppPropertyList, traverse.fileLock);
                    traverse.getProperties().put(str, viewModelListProperty);
                    getDependencies().add(viewModelListProperty);
                    viewModelProperty = viewModelListProperty;
                } else if (!(viewModelProperty instanceof ViewModelListProperty)) {
                    throw new ViewModelException("Property '" + str + "' exists but is not of the expected type.");
                }
            } finally {
            }
        }
        return (ViewModelListProperty) viewModelProperty;
    }

    @NotNull
    public String getName() {
        return cppName(getCppPointer());
    }

    @NotNull
    public ViewModelNumberProperty getNumberProperty(@NotNull String path) {
        List split$default;
        ViewModelProperty<?> viewModelProperty;
        Intrinsics.checkNotNullParameter(path, "path");
        split$default = StringsKt__StringsKt.split$default(path, new String[]{"/"}, false, 0, 6, null);
        List<String> subList = split$default.subList(0, split$default.size() - 1);
        String str = (String) CollectionsKt.Q(split$default);
        ViewModelInstance traverse = traverse(subList);
        synchronized (traverse.fileLock) {
            try {
                viewModelProperty = traverse.getProperties().get(str);
                if (viewModelProperty == null) {
                    long cppPropertyNumber = cppPropertyNumber(traverse.getCppPointer(), str);
                    if (cppPropertyNumber == 0) {
                        throw new ViewModelException("Property not found: " + path);
                    }
                    ViewModelNumberProperty viewModelNumberProperty = new ViewModelNumberProperty(cppPropertyNumber, traverse.fileLock);
                    traverse.getProperties().put(str, viewModelNumberProperty);
                    getDependencies().add(viewModelNumberProperty);
                    viewModelProperty = viewModelNumberProperty;
                } else if (!(viewModelProperty instanceof ViewModelNumberProperty)) {
                    throw new ViewModelException("Property '" + str + "' exists but is not of the expected type.");
                }
            } finally {
            }
        }
        return (ViewModelNumberProperty) viewModelProperty;
    }

    @NotNull
    public Map<String, ViewModelProperty<?>> getProperties() {
        return this.properties;
    }

    @NotNull
    public ViewModelStringProperty getStringProperty(@NotNull String path) {
        List split$default;
        ViewModelProperty<?> viewModelProperty;
        Intrinsics.checkNotNullParameter(path, "path");
        split$default = StringsKt__StringsKt.split$default(path, new String[]{"/"}, false, 0, 6, null);
        List<String> subList = split$default.subList(0, split$default.size() - 1);
        String str = (String) CollectionsKt.Q(split$default);
        ViewModelInstance traverse = traverse(subList);
        synchronized (traverse.fileLock) {
            try {
                viewModelProperty = traverse.getProperties().get(str);
                if (viewModelProperty == null) {
                    long cppPropertyString = cppPropertyString(traverse.getCppPointer(), str);
                    if (cppPropertyString == 0) {
                        throw new ViewModelException("Property not found: " + path);
                    }
                    ViewModelStringProperty viewModelStringProperty = new ViewModelStringProperty(cppPropertyString, traverse.fileLock);
                    traverse.getProperties().put(str, viewModelStringProperty);
                    getDependencies().add(viewModelStringProperty);
                    viewModelProperty = viewModelStringProperty;
                } else if (!(viewModelProperty instanceof ViewModelStringProperty)) {
                    throw new ViewModelException("Property '" + str + "' exists but is not of the expected type.");
                }
            } finally {
            }
        }
        return (ViewModelStringProperty) viewModelProperty;
    }

    @NotNull
    public ViewModelTriggerProperty getTriggerProperty(@NotNull String path) {
        List split$default;
        ViewModelProperty<?> viewModelProperty;
        Intrinsics.checkNotNullParameter(path, "path");
        split$default = StringsKt__StringsKt.split$default(path, new String[]{"/"}, false, 0, 6, null);
        List<String> subList = split$default.subList(0, split$default.size() - 1);
        String str = (String) CollectionsKt.Q(split$default);
        ViewModelInstance traverse = traverse(subList);
        synchronized (traverse.fileLock) {
            try {
                viewModelProperty = traverse.getProperties().get(str);
                if (viewModelProperty == null) {
                    long cppPropertyTrigger = cppPropertyTrigger(traverse.getCppPointer(), str);
                    if (cppPropertyTrigger == 0) {
                        throw new ViewModelException("Property not found: " + path);
                    }
                    ViewModelTriggerProperty viewModelTriggerProperty = new ViewModelTriggerProperty(cppPropertyTrigger, traverse.fileLock);
                    traverse.getProperties().put(str, viewModelTriggerProperty);
                    getDependencies().add(viewModelTriggerProperty);
                    viewModelProperty = viewModelTriggerProperty;
                } else if (!(viewModelProperty instanceof ViewModelTriggerProperty)) {
                    throw new ViewModelException("Property '" + str + "' exists but is not of the expected type.");
                }
            } finally {
            }
        }
        return (ViewModelTriggerProperty) viewModelProperty;
    }

    public void pollChanges$kotlin_release() {
        synchronized (this.fileLock) {
            try {
                Iterator<T> it = getProperties().values().iterator();
                while (it.hasNext()) {
                    ((ViewModelProperty) it.next()).pollChanges$kotlin_release();
                }
                Iterator<T> it2 = getChildren().values().iterator();
                while (it2.hasNext()) {
                    ((ViewModelInstance) it2.next()).pollChanges$kotlin_release();
                }
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    @Override // app.rive.runtime.kotlin.core.NativeObject, app.rive.runtime.kotlin.core.RefCount
    public int release() {
        while (true) {
            ReentrantLock reentrantLock = this.fileLock;
            synchronized (reentrantLock) {
                if (this.fileLock == reentrantLock) {
                    return super.release();
                }
                Unit unit = Unit.a;
            }
        }
    }

    public void setChildren(@NotNull Map<String, ViewModelInstance> map) {
        Intrinsics.checkNotNullParameter(map, "<set-?>");
        this.children = map;
    }

    public void setInstanceProperty(@NotNull String path, @NotNull ViewModelInstance instance) {
        List split$default;
        Intrinsics.checkNotNullParameter(path, "path");
        Intrinsics.checkNotNullParameter(instance, "instance");
        split$default = StringsKt__StringsKt.split$default(path, new String[]{"/"}, false, 0, 6, null);
        List<String> subList = split$default.subList(0, split$default.size() - 1);
        String str = (String) CollectionsKt.Q(split$default);
        ViewModelInstance traverse = traverse(subList);
        ReentrantLock reentrantLock = traverse.fileLock;
        instance.updateFileLock$kotlin_release(reentrantLock);
        synchronized (reentrantLock) {
            if (!cppSetInstanceProperty(traverse.getCppPointer(), str, instance.getCppPointer())) {
                throw new ViewModelException("Property not found: " + path + "; or instance is incompatible.");
            }
            traverse.getChildren().put(str, instance);
            Unit unit = Unit.a;
        }
    }

    public void setProperties(@NotNull Map<String, ViewModelProperty<?>> map) {
        Intrinsics.checkNotNullParameter(map, "<set-?>");
        this.properties = map;
    }

    @NotNull
    public Transfer transfer() {
        return new Transfer(this);
    }

    public void updateFileLock$kotlin_release(@NotNull ReentrantLock newFileLock) {
        Pair pair;
        boolean z5;
        Intrinsics.checkNotNullParameter(newFileLock, "newFileLock");
        do {
            ReentrantLock reentrantLock = this.fileLock;
            pair = null;
            if (reentrantLock == newFileLock) {
                break;
            }
            z5 = true;
            if (reentrantLock == newFileLock) {
                synchronized (reentrantLock) {
                    try {
                        if (this.fileLock == reentrantLock) {
                            this.fileLock = newFileLock;
                            pair = new Pair(CollectionsKt.i0(getProperties().values()), CollectionsKt.i0(getChildren().values()));
                        } else {
                            z5 = false;
                        }
                        Unit unit = Unit.a;
                    } catch (Throwable th2) {
                        throw th2;
                    }
                }
            } else {
                int identityHashCode = System.identityHashCode(reentrantLock);
                int identityHashCode2 = System.identityHashCode(newFileLock);
                if (identityHashCode < identityHashCode2) {
                    synchronized (reentrantLock) {
                        synchronized (newFileLock) {
                            try {
                                if (this.fileLock == reentrantLock) {
                                    this.fileLock = newFileLock;
                                    pair = new Pair(CollectionsKt.i0(getProperties().values()), CollectionsKt.i0(getChildren().values()));
                                } else {
                                    z5 = false;
                                }
                                Unit unit2 = Unit.a;
                            } catch (Throwable th3) {
                                throw th3;
                            }
                        }
                    }
                } else if (identityHashCode > identityHashCode2) {
                    synchronized (newFileLock) {
                        synchronized (reentrantLock) {
                            try {
                                if (this.fileLock == reentrantLock) {
                                    this.fileLock = newFileLock;
                                    pair = new Pair(CollectionsKt.i0(getProperties().values()), CollectionsKt.i0(getChildren().values()));
                                } else {
                                    z5 = false;
                                }
                                Unit unit3 = Unit.a;
                            } catch (Throwable th4) {
                                throw th4;
                            }
                        }
                    }
                } else {
                    synchronized (ViewModelInstanceKt.fileLockUpdateTieLock) {
                        synchronized (reentrantLock) {
                            synchronized (newFileLock) {
                                try {
                                    if (this.fileLock == reentrantLock) {
                                        this.fileLock = newFileLock;
                                        pair = new Pair(CollectionsKt.i0(getProperties().values()), CollectionsKt.i0(getChildren().values()));
                                    } else {
                                        z5 = false;
                                    }
                                    Unit unit4 = Unit.a;
                                } catch (Throwable th5) {
                                    throw th5;
                                }
                            }
                        }
                    }
                }
            }
        } while (!z5);
        if (pair == null) {
            return;
        }
        Iterator it = ((Iterable) pair.f13474d).iterator();
        while (it.hasNext()) {
            ((ViewModelProperty) it.next()).updateFileLock$kotlin_release(newFileLock);
        }
        Iterator it2 = ((Iterable) pair.f13475e).iterator();
        while (it2.hasNext()) {
            ((ViewModelInstance) it2.next()).updateFileLock$kotlin_release(newFileLock);
        }
    }
}
