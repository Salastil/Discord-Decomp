package app.rive.runtime.kotlin.core;

import app.rive.runtime.kotlin.core.errors.ArtboardException;
import app.rive.runtime.kotlin.core.errors.ViewModelException;
import com.discord.jank_stats.JankRecordStore;
import com.facebook.react.devsupport.StackTraceHelper;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.locks.ReentrantLock;
import kotlin.Metadata;
import kotlin.collections.d0;
import kotlin.collections.r0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.ranges.IntRange;
import org.jetbrains.annotations.NotNull;
import s4.h;
import yo.j;

@Metadata(d1 = {"\u0000p\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0012\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010 \n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\f\n\u0002\u0010\t\n\u0002\b\t\n\u0002\u0010\u0002\n\u0002\b\b\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\b\b\u0017\u0018\u00002\u00020\u0001:\u0001FB#\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005\u0012\n\b\u0002\u0010\u0006\u001a\u0004\u0018\u00010\u0007¢\u0006\u0002\u0010\bJ\u0010\u0010#\u001a\u00020\u001a2\u0006\u0010$\u001a\u00020\nH\u0016J\u0010\u0010#\u001a\u00020\u001a2\u0006\u0010%\u001a\u00020\u000fH\u0016J\u0019\u0010&\u001a\u00020'2\u0006\u0010(\u001a\u00020'2\u0006\u0010$\u001a\u00020\nH\u0095 J\u0019\u0010)\u001a\u00020'2\u0006\u0010(\u001a\u00020'2\u0006\u0010%\u001a\u00020\u000fH\u0092 J\u0011\u0010*\u001a\u00020\n2\u0006\u0010(\u001a\u00020'H\u0092 J\u0019\u0010+\u001a\u00020\u000f2\u0006\u0010(\u001a\u00020'2\u0006\u0010$\u001a\u00020\nH\u0092 J\u0019\u0010,\u001a\u00020'2\u0006\u0010(\u001a\u00020'2\u0006\u0010%\u001a\u00020\u000fH\u0092 J\u0011\u0010-\u001a\u00020'2\u0006\u0010(\u001a\u00020'H\u0092 J\u0019\u0010.\u001a\u00020'2\u0006\u0010(\u001a\u00020'2\u0006\u0010/\u001a\u00020'H\u0092 J\u0011\u00100\u001a\u0002012\u0006\u00102\u001a\u00020'H\u0096 J\u0017\u00103\u001a\b\u0012\u0004\u0012\u00020\u00130\u000e2\u0006\u0010(\u001a\u00020'H\u0092 J\u0019\u00104\u001a\u00020'2\u0006\u0010(\u001a\u00020'2\u0006\u00105\u001a\u00020\nH\u0092 J\u0019\u00106\u001a\u00020'2\u0006\u0010(\u001a\u00020'2\u0006\u00107\u001a\u00020\u000fH\u0095 J\u0011\u00108\u001a\u00020\n2\u0006\u0010(\u001a\u00020'H\u0092 J\u001c\u00109\u001a\u00020:2\u0006\u0010%\u001a\u00020\u000f2\n\b\u0002\u0010;\u001a\u0004\u0018\u00010<H\u0016J\u0014\u0010=\u001a\u00020:2\n\b\u0002\u0010;\u001a\u0004\u0018\u00010<H\u0016J\u0010\u0010>\u001a\u00020?2\u0006\u0010#\u001a\u00020\u001aH\u0016J\u0010\u0010@\u001a\u00020?2\u0006\u00105\u001a\u00020\nH\u0016J\u0010\u0010A\u001a\u00020?2\u0006\u00107\u001a\u00020\u000fH\u0016J)\u0010B\u001a\u00020'2\u0006\u0010\u0002\u001a\u00020\u00032\u0006\u0010C\u001a\u00020\n2\u0006\u0010\u0004\u001a\u00020\n2\u0006\u0010D\u001a\u00020'H\u0092 J\b\u0010E\u001a\u00020\nH\u0016R\u0014\u0010\t\u001a\u00020\n8VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\u000b\u0010\fR\u001a\u0010\r\u001a\b\u0012\u0004\u0012\u00020\u000f0\u000e8VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\u0010\u0010\u0011R\u001a\u0010\u0012\u001a\b\u0012\u0004\u0012\u00020\u00130\u000e8VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\u0014\u0010\u0011R\u0014\u0010\u0015\u001a\u00020\u0016X\u0090\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u0018R\u0014\u0010\u0019\u001a\u00020\u001a8VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\u001b\u0010\u001cR\u0014\u0010\u001d\u001a\u00020\u00168VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\u001e\u0010\u0018R\u0014\u0010\u0004\u001a\u00020\u0005X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u001f\u0010 R\u0014\u0010!\u001a\u00020\n8VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\"\u0010\f¨\u0006G"}, d2 = {"Lapp/rive/runtime/kotlin/core/File;", "Lapp/rive/runtime/kotlin/core/NativeObject;", "bytes", "", "rendererType", "Lapp/rive/runtime/kotlin/core/RendererType;", "fileAssetLoader", "Lapp/rive/runtime/kotlin/core/FileAssetLoader;", "([BLapp/rive/runtime/kotlin/core/RendererType;Lapp/rive/runtime/kotlin/core/FileAssetLoader;)V", "artboardCount", "", "getArtboardCount", "()I", "artboardNames", "", "", "getArtboardNames", "()Ljava/util/List;", "enums", "Lapp/rive/runtime/kotlin/core/File$Enum;", "getEnums", "fileLock", "Ljava/util/concurrent/locks/ReentrantLock;", "getFileLock$kotlin_release", "()Ljava/util/concurrent/locks/ReentrantLock;", "firstArtboard", "Lapp/rive/runtime/kotlin/core/Artboard;", "getFirstArtboard", "()Lapp/rive/runtime/kotlin/core/Artboard;", "lock", "getLock", "getRendererType", "()Lapp/rive/runtime/kotlin/core/RendererType;", "viewModelCount", "getViewModelCount", "artboard", "index", StackTraceHelper.NAME_KEY, "cppArtboardByIndex", "", "cppPointer", "cppArtboardByName", "cppArtboardCount", "cppArtboardNameByIndex", "cppCreateBindableArtboardByName", "cppCreateDefaultBindableArtboard", "cppDefaultViewModelForArtboard", "artboardPointer", "cppDelete", "", "pointer", "cppEnums", "cppViewModelByIndex", "viewModelIdx", "cppViewModelByName", "viewModelName", "cppViewModelCount", "createBindableArtboardByName", "Lapp/rive/runtime/kotlin/core/BindableArtboard;", "viewModelInstance", "Lapp/rive/runtime/kotlin/core/ViewModelInstance;", "createDefaultBindableArtboard", "defaultViewModelForArtboard", "Lapp/rive/runtime/kotlin/core/ViewModel;", "getViewModelByIndex", "getViewModelByName", "import", "length", "fileAssetLoaderPointer", "release", "Enum", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nFile.kt\nKotlin\n*S Kotlin\n*F\n+ 1 File.kt\napp/rive/runtime/kotlin/core/File\n+ 2 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,272:1\n1557#2:273\n1628#2,3:274\n1557#2:278\n1628#2,3:279\n1#3:277\n*S KotlinDebug\n*F\n+ 1 File.kt\napp/rive/runtime/kotlin/core/File\n*L\n126#1:273\n126#1:274,3\n202#1:278\n202#1:279,3\n*E\n"})
/* loaded from: classes.dex */
public class File extends NativeObject {
    public static final int $stable = 8;

    @NotNull
    private final ReentrantLock fileLock;

    @NotNull
    private final RendererType rendererType;

    @Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010 \n\u0002\b\t\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\b\u0087\b\u0018\u00002\u00020\u0001B\u001b\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00030\u0005¢\u0006\u0002\u0010\u0006J\t\u0010\u000b\u001a\u00020\u0003HÆ\u0003J\u000f\u0010\f\u001a\b\u0012\u0004\u0012\u00020\u00030\u0005HÆ\u0003J#\u0010\r\u001a\u00020\u00002\b\b\u0002\u0010\u0002\u001a\u00020\u00032\u000e\b\u0002\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00030\u0005HÆ\u0001J\u0013\u0010\u000e\u001a\u00020\u000f2\b\u0010\u0010\u001a\u0004\u0018\u00010\u0001HÖ\u0003J\t\u0010\u0011\u001a\u00020\u0012HÖ\u0001J\t\u0010\u0013\u001a\u00020\u0003HÖ\u0001R\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bR\u0017\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00030\u0005¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\n¨\u0006\u0014"}, d2 = {"Lapp/rive/runtime/kotlin/core/File$Enum;", "", StackTraceHelper.NAME_KEY, "", "values", "", "(Ljava/lang/String;Ljava/util/List;)V", "getName", "()Ljava/lang/String;", "getValues", "()Ljava/util/List;", "component1", "component2", "copy", "equals", "", JankRecordStore.SCREEN_OTHER, "hashCode", "", "toString", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
    public static final /* data */ class Enum {
        public static final int $stable = 8;

        @NotNull
        private final String name;

        @NotNull
        private final List<String> values;

        public Enum(@NotNull String name, @NotNull List<String> values) {
            Intrinsics.checkNotNullParameter(name, "name");
            Intrinsics.checkNotNullParameter(values, "values");
            this.name = name;
            this.values = values;
        }

        /* JADX WARN: Multi-variable type inference failed */
        public static /* synthetic */ Enum copy$default(Enum r02, String str, List list, int i5, Object obj) {
            if ((i5 & 1) != 0) {
                str = r02.name;
            }
            if ((i5 & 2) != 0) {
                list = r02.values;
            }
            return r02.copy(str, list);
        }

        @NotNull
        /* renamed from: component1, reason: from getter */
        public final String getName() {
            return this.name;
        }

        @NotNull
        public final List<String> component2() {
            return this.values;
        }

        @NotNull
        public final Enum copy(@NotNull String name, @NotNull List<String> values) {
            Intrinsics.checkNotNullParameter(name, "name");
            Intrinsics.checkNotNullParameter(values, "values");
            return new Enum(name, values);
        }

        public boolean equals(Object other) {
            if (this == other) {
                return true;
            }
            if (!(other instanceof Enum)) {
                return false;
            }
            Enum r5 = (Enum) other;
            return Intrinsics.areEqual(this.name, r5.name) && Intrinsics.areEqual(this.values, r5.values);
        }

        @NotNull
        public final String getName() {
            return this.name;
        }

        @NotNull
        public final List<String> getValues() {
            return this.values;
        }

        public int hashCode() {
            return this.values.hashCode() + (this.name.hashCode() * 31);
        }

        @NotNull
        public String toString() {
            return "Enum(name=" + this.name + ", values=" + this.values + ")";
        }
    }

    public /* synthetic */ File(byte[] bArr, RendererType rendererType, FileAssetLoader fileAssetLoader, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(bArr, (i5 & 2) != 0 ? Rive.INSTANCE.getDefaultRendererType() : rendererType, (i5 & 4) != 0 ? null : fileAssetLoader);
    }

    private native long cppArtboardByName(long cppPointer, String name);

    private native int cppArtboardCount(long cppPointer);

    private native String cppArtboardNameByIndex(long cppPointer, int index);

    private native long cppCreateBindableArtboardByName(long cppPointer, String name);

    private native long cppCreateDefaultBindableArtboard(long cppPointer);

    private native long cppDefaultViewModelForArtboard(long cppPointer, long artboardPointer);

    private native List<Enum> cppEnums(long cppPointer);

    private native long cppViewModelByIndex(long cppPointer, int viewModelIdx);

    private native int cppViewModelCount(long cppPointer);

    public static /* synthetic */ BindableArtboard createBindableArtboardByName$default(File file, String str, ViewModelInstance viewModelInstance, int i5, Object obj) {
        if (obj != null) {
            throw new UnsupportedOperationException("Super calls with default arguments not supported in this target, function: createBindableArtboardByName");
        }
        if ((i5 & 2) != 0) {
            viewModelInstance = null;
        }
        return file.createBindableArtboardByName(str, viewModelInstance);
    }

    public static /* synthetic */ BindableArtboard createDefaultBindableArtboard$default(File file, ViewModelInstance viewModelInstance, int i5, Object obj) {
        if (obj != null) {
            throw new UnsupportedOperationException("Super calls with default arguments not supported in this target, function: createDefaultBindableArtboard");
        }
        if ((i5 & 1) != 0) {
            viewModelInstance = null;
        }
        return file.createDefaultBindableArtboard(viewModelInstance);
    }

    /* renamed from: import, reason: not valid java name */
    private native long m237import(byte[] bytes, int length, int rendererType, long fileAssetLoaderPointer);

    @NotNull
    public Artboard artboard(@NotNull String name) {
        Intrinsics.checkNotNullParameter(name, "name");
        long cppArtboardByName = cppArtboardByName(getCppPointer(), name);
        if (cppArtboardByName != 0) {
            Artboard artboard = new Artboard(cppArtboardByName, getFileLock(), this);
            getDependencies().add(artboard);
            return artboard;
        }
        List<String> artboardNames = getArtboardNames();
        ArrayList arrayList = new ArrayList(d0.l(artboardNames, 10));
        Iterator<T> it = artboardNames.iterator();
        while (it.hasNext()) {
            arrayList.add("\"" + ((String) it.next()) + "\"");
        }
        throw new ArtboardException("Artboard \"" + name + "\" not found. Available Artboards: " + arrayList);
    }

    public native long cppArtboardByIndex(long cppPointer, int index);

    @Override // app.rive.runtime.kotlin.core.NativeObject
    public native void cppDelete(long pointer);

    public native long cppViewModelByName(long cppPointer, @NotNull String viewModelName);

    @NotNull
    public BindableArtboard createBindableArtboardByName(@NotNull String name, ViewModelInstance viewModelInstance) {
        Intrinsics.checkNotNullParameter(name, "name");
        long cppCreateBindableArtboardByName = cppCreateBindableArtboardByName(getCppPointer(), name);
        if (cppCreateBindableArtboardByName == 0) {
            throw new ArtboardException(h.f("No BindableArtboard found with name ", name, "."));
        }
        BindableArtboard bindableArtboard = new BindableArtboard(cppCreateBindableArtboardByName, viewModelInstance);
        getDependencies().add(bindableArtboard);
        return bindableArtboard;
    }

    @NotNull
    public BindableArtboard createDefaultBindableArtboard(ViewModelInstance viewModelInstance) {
        long cppCreateDefaultBindableArtboard = cppCreateDefaultBindableArtboard(getCppPointer());
        if (cppCreateDefaultBindableArtboard == 0) {
            throw new ArtboardException("No default BindableArtboard.");
        }
        BindableArtboard bindableArtboard = new BindableArtboard(cppCreateDefaultBindableArtboard, viewModelInstance);
        getDependencies().add(bindableArtboard);
        return bindableArtboard;
    }

    @NotNull
    public ViewModel defaultViewModelForArtboard(@NotNull Artboard artboard) {
        Intrinsics.checkNotNullParameter(artboard, "artboard");
        long cppDefaultViewModelForArtboard = cppDefaultViewModelForArtboard(getCppPointer(), artboard.getCppPointer());
        if (cppDefaultViewModelForArtboard == 0) {
            throw new ViewModelException(h.f("No default ViewModel found for artboard ", artboard.getName(), "."));
        }
        ViewModel viewModel = new ViewModel(cppDefaultViewModelForArtboard, getFileLock());
        getDependencies().add(viewModel);
        return viewModel;
    }

    public int getArtboardCount() {
        return cppArtboardCount(getCppPointer());
    }

    @NotNull
    public List<String> getArtboardNames() {
        IntRange i5 = j.i(0, getArtboardCount());
        ArrayList arrayList = new ArrayList(d0.l(i5, 10));
        Iterator it = i5.iterator();
        while (it.hasNext()) {
            arrayList.add(cppArtboardNameByIndex(getCppPointer(), ((r0) it).nextInt()));
        }
        return arrayList;
    }

    @NotNull
    public List<Enum> getEnums() {
        return cppEnums(getCppPointer());
    }

    @NotNull
    /* renamed from: getFileLock$kotlin_release, reason: from getter */
    public ReentrantLock getFileLock() {
        return this.fileLock;
    }

    @NotNull
    public Artboard getFirstArtboard() {
        return artboard(0);
    }

    @NotNull
    public ReentrantLock getLock() {
        return getFileLock();
    }

    @NotNull
    public RendererType getRendererType() {
        return this.rendererType;
    }

    @NotNull
    public ViewModel getViewModelByIndex(int viewModelIdx) {
        long cppViewModelByIndex = cppViewModelByIndex(getCppPointer(), viewModelIdx);
        if (cppViewModelByIndex == 0) {
            throw new ViewModelException(h.e(viewModelIdx, "No ViewModel found at index ", "."));
        }
        ViewModel viewModel = new ViewModel(cppViewModelByIndex, getFileLock());
        getDependencies().add(viewModel);
        return viewModel;
    }

    @NotNull
    public ViewModel getViewModelByName(@NotNull String viewModelName) {
        Intrinsics.checkNotNullParameter(viewModelName, "viewModelName");
        long cppViewModelByName = cppViewModelByName(getCppPointer(), viewModelName);
        if (cppViewModelByName == 0) {
            throw new ViewModelException(h.f("No ViewModel found with name ", viewModelName, "."));
        }
        ViewModel viewModel = new ViewModel(cppViewModelByName, getFileLock());
        getDependencies().add(viewModel);
        return viewModel;
    }

    public int getViewModelCount() {
        return cppViewModelCount(getCppPointer());
    }

    @Override // app.rive.runtime.kotlin.core.NativeObject, app.rive.runtime.kotlin.core.RefCount
    public int release() {
        int release;
        synchronized (getFileLock()) {
            release = super.release();
        }
        return release;
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public File(@NotNull byte[] bytes, @NotNull RendererType rendererType, FileAssetLoader fileAssetLoader) {
        super(0L);
        Intrinsics.checkNotNullParameter(bytes, "bytes");
        Intrinsics.checkNotNullParameter(rendererType, "rendererType");
        this.rendererType = rendererType;
        if (fileAssetLoader != null) {
            fileAssetLoader.setRendererType(getRendererType());
            fileAssetLoader.acquire();
            getDependencies().add(fileAssetLoader);
        }
        setCppPointer(m237import(bytes, bytes.length, getRendererType().getValue(), fileAssetLoader != null ? fileAssetLoader.getCppPointer() : 0L));
        getRefs().incrementAndGet();
        this.fileLock = new ReentrantLock();
    }

    @NotNull
    public Artboard artboard(int index) {
        long cppArtboardByIndex = cppArtboardByIndex(getCppPointer(), index);
        if (cppArtboardByIndex != 0) {
            Artboard artboard = new Artboard(cppArtboardByIndex, getFileLock(), this);
            getDependencies().add(artboard);
            return artboard;
        }
        throw new ArtboardException(h.e(index, "No Artboard found at index ", "."));
    }
}
